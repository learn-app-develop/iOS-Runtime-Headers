/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STAllowanceSetupListController : PSListController {
    PSSpecifier * _allAppsAndCategoriesSpecifier;
    PSSpecifier * _categoriesGroupSpecifier;
    <STAllowanceSetupListControllerDelegate> * _delegate;
    NSArray * _initialSelectedIdentifiers;
}

@property (nonatomic, retain) PSSpecifier *allAppsAndCategoriesSpecifier;
@property (nonatomic, retain) PSSpecifier *categoriesGroupSpecifier;
@property <STAllowanceSetupListControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *initialSelectedIdentifiers;

- (void).cxx_destruct;
- (void)addButtonTapped:(id)arg1;
- (id)allAppsAndCategoriesSpecifier;
- (bool)canBeShownFromSuspendedState;
- (void)cancelButtonTapped:(id)arg1;
- (id)categoriesGroupSpecifier;
- (id)delegate;
- (id)init;
- (id)initWithSelectedIdentifiers:(id)arg1;
- (id)initialSelectedIdentifiers;
- (void)loadView;
- (void)setAllAppsAndCategoriesSpecifier:(id)arg1;
- (void)setCategoriesGroupSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
