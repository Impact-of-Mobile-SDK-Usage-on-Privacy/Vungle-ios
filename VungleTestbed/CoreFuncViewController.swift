//
//  CoreFuncViewController.swift
//  VungleTestbed
//
//  This display uses the core functionality of Vungle. In this case, showing Banner ad.
//

import UIKit
import VungleAdsSDK

class CoreFuncViewController: UIViewController, VungleBannerDelegate {
    @IBOutlet weak var bannerAdView: UIView!
    private var bannerAd: VungleBanner?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        print("Core func");
        if (MyVariables.onLoad) {
            buttonClick(self);
        } else {
            buttonClick(self)
        }
    }
    
    @IBAction func buttonClick(_ sender: Any) {
            self.bannerAd = VungleBanner(placementId: MyVariables.BANNER_ID, size: BannerSize.regular)
            self.bannerAd?.delegate = self
            self.bannerAd?.load()
            
            
            let alertController = UIAlertController(title: "Core Func", message: "show banner ad", preferredStyle: .alert)
            let OKAction = UIAlertAction(title: "OK", style: .default) {
                (action: UIAlertAction!) in
                // Code in this block will trigger when OK button tapped.
                print("Ok button tapped");
            }
            alertController.addAction(OKAction)
            self.present(alertController, animated: true, completion: nil)
        }
    
    
    // Ad load Events
    func bannerAdDidLoad(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "Banner load successful", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
        self.bannerAd?.present(on: bannerAdView)
    }

    func bannerAdDidFailToLoad(_ banner: VungleBanner, withError: NSError) {
        let alert = UIAlertController(title: "Error", message: "\(withError.description)", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
  
    // Ad Lifecycle Events
    func bannerAdWillPresent(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdWillPresent", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdDidPresent(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdDidPresent", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }

    func bannerAdDidFailToPresent(_ banner: VungleBanner, withError: NSError) {
        let alert = UIAlertController(title: "Error", message: "\(withError.description)", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdDidTrackImpression(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdDidTrackImpression", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdDidClick(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdDidClick", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdWillLeaveApplication(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdWillLeaveApplication", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdWillClose(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdWillClose", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    func bannerAdDidClose(_ banner: VungleBanner) {
        let alert = UIAlertController(title: "Error", message: "bannerAdDidClose", preferredStyle:.alert)
        let OKAction = UIAlertAction(title: "OK", style: .default) {
            (action: UIAlertAction!) in
            // Code in this block will trigger when OK button tapped.
            print("Ok button tapped");
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
}

