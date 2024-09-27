//
//  InitialStateViewController.swift
//  VungleTestbed
//
//  This file realizes the initial state for the study. Vungle has no object to instantiate.
//

import UIKit

class InitialStateViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        if (MyVariables.onLoad) {
            createObjk(self);
        }
    }
    @IBAction func createObjk(_ sender: Any) {
        
        let alertController = UIAlertController(title: "Create Object", message: "There is no obj", preferredStyle: .alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alertController.addAction(OKAction)
        self.present(alertController, animated: true, completion: nil)
    }
}
