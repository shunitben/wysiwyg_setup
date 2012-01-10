All you need to setup wysiwyg (more) easily:

/** fe_wysiwyg - the feature **/

Contains configuration for:
- input formats
- wysiwyg for input formats


/** files **/

- wysiwyg_styles.js
  Overrides the styles dropdown in ckEditor, mostly in order to set rtl and ltr.
  This gets called from the module file.

- wysiwyg.css
  A stylesheet for ckEditor.
  This should be edited to match the site's styles.


/** Important - wysiwyg module version **/
As of the creation of this module (Jan 9, 2012), you need to use the dev version
of wysiwyg module, or apply the patch from here:
http://drupal.org/node/624018
That enables us to export wysiwyg configs info features.


/** More dependencies **/
Just to remind us to download these modules:
- imce
- imce_mkdir


/** To do after installing **/

- Download ckEditor and place it in sites/all/libraries.
- Configure imce.
- Edit wysiwyg.css




