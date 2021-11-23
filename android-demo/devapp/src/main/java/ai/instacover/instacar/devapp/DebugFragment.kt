package ai.instacover.instacar.devapp

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import android.widget.TextView

class DebugFragment : Fragment() {

    lateinit var button1 : Button
    lateinit var button2 : Button
    lateinit var progressTxt : TextView

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_debug, container, false)

        button1 = view.findViewById<Button>(R.id.btnShow1)
        button2 = view.findViewById<Button>(R.id.btnShow2)
        progressTxt = view.findViewById<TextView>(R.id.progress)

        return view
    }
}

