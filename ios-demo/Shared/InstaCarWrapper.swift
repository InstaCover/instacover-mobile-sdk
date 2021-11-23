import Foundation
import InstaCover
import SwiftUI

struct InstaCarWrapper: UIViewRepresentable {
    var sessionId: String
    let instaCover = InstaCover()
 
    class Coordinator: InstaCarListener {
        func onError() {
            self.parent.state = "error"
        }
        
        var parent: InstaCarWrapper
        
        func onFinished() {
            self.parent.state = "finished"
        }
        
        func onLoaded() {
            self.parent.state = "loaded"
        }
        
        func onLoading() {
            self.parent.state = "loading"
        }
        
    
        
        init(_ parent: InstaCarWrapper) {
            self.parent = parent
            
        }
    }
    
    @Binding var state: String
    
    func makeCoordinator() -> Coordinator {
        Coordinator(self)
    }
    
    func updateUIView(_ uiView: UIView, context: Context) {
    }
    
    
    func makeUIView(context: Context) -> UIView  {
        self.state = "unknown"
        
        return instaCover.createInstacarView(sessionId: sessionId, stateChangeListener: context.coordinator)
    }
    
}
