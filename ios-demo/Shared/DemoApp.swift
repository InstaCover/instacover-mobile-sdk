import SwiftUI


@main
struct DemoApp: App {
    var body: some Scene {
        WindowGroup {
            DemoList()
        }
    }
}

let sessionIds = [
    "cl0189zmp0002012oufx6e696",
//    "ckn82qlhf02340s3vxnvku0wr",
//    "ckn82qlhf02340s3vxnvku998"
]

struct DemoList: View {
    @State private var state: String = ""

    var body: some View {
        NavigationView{
            
            List(sessionIds, id: \.self) { sessionId in
                NavigationLink {
                    VStack {
                        Text("InstaCarListener \(state)")
                        InstaCarWrapper(sessionId: sessionId, state: $state)
                    }
                } label: {
                    Text("Open session \(sessionId)")
                }
            }
            .navigationTitle("InstaCover")
            
        }.navigationViewStyle(StackNavigationViewStyle())
    }
}
struct DemoList_Previews: PreviewProvider {
    static var previews: some View {
        DemoList()
    }
}

