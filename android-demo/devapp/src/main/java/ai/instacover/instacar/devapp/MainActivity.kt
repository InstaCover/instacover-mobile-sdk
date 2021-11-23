package ai.instacover.instacar.devapp

import ai.instacover.InstaCarListener
import ai.instacover.InstaCover
import android.os.Bundle
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    private val instaCover = InstaCover()

    private val listener = object: InstaCarListener {
        override fun onLoaded() {
            updateProgress("loaded")
        }

        override fun onError() {
            updateProgress("error")
        }

        override fun onFinished() {
            updateProgress("finished")
        }

        override fun onLoading() {
            updateProgress("loading")
        }
    }


    private fun updateProgress(progress: String) {
        val debugFragment:DebugFragment = debug_fragment as DebugFragment
        debugFragment.progressTxt.text = progress
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        updateProgress("unknown")

        val debugFragment:DebugFragment = debug_fragment as DebugFragment

        debugFragment.button1.setOnClickListener(View.OnClickListener {
            showSession("cl012pa7w0097qcc97d2rnv19")
        })
        debugFragment.button2.setOnClickListener(View.OnClickListener {
            showSession("cl012qfc50226qcc9zjxdmc0d")
        })
    }

    private fun showSession(sessionId: String)
    {
        val fragment = instaCover.createSessionFragment(sessionId, listener)

        val fragmentManager = supportFragmentManager
        val fragmentTransaction = fragmentManager.beginTransaction()

        fragmentTransaction.replace(R.id.fragment_container,fragment)
        fragmentTransaction.commit()
    }
}