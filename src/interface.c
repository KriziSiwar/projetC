/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *notebook1;
  GtkWidget *fixed2;
  GtkObject *jour_adj;
  GtkWidget *jour;
  GtkObject *mois_adj;
  GtkWidget *mois;
  GtkObject *ann__e_adj;
  GtkWidget *ann__e;
  GtkWidget *label6;
  GtkWidget *label7;
  GtkWidget *entry1;
  GtkWidget *entry2;
  GtkWidget *entry3;
  GtkWidget *combobox2;
  GtkWidget *combobox3;
  GtkWidget *entry4;
  GtkWidget *entry5;
  GtkWidget *date;
  GtkWidget *identifiant;
  GtkWidget *nbr_conseiller;
  GtkWidget *nbr_habitant;
  GtkWidget *municipalite;
  GtkWidget *code_postal;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label13;
  GtkWidget *ajouter;
  GtkWidget *fixed3;
  GtkWidget *entry6elec;
  GtkWidget *entry7election;
  GtkWidget *entry8elec;
  GtkWidget *idmodelec;
  GtkWidget *entry9election;
  GtkWidget *entry10election;
  GtkWidget *button2;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label28;
  GtkWidget *label27election;
  GtkWidget *label28elec;
  GtkWidget *label29election;
  GtkWidget *label30election;
  GtkWidget *modifier;
  GtkWidget *fixed4;
  GtkWidget *entryelection_id7;
  GtkWidget *idsupp;
  GtkWidget *labelelectiontrouver;
  GtkWidget *button7_election_chercher;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label29;
  GtkWidget *checkbutton1;
  GtkWidget *button6;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *suppression;
  GtkWidget *supprimer;
  GtkWidget *fixed5;
  GtkWidget *treeview1;
  GtkWidget *label25;
  GtkWidget *buttonelctionaffichage;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label26;
  GtkWidget *afficher;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed1), notebook1, 0, 0);
  gtk_widget_set_size_request (notebook1, 736, 528);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  jour_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jour = gtk_spin_button_new (GTK_ADJUSTMENT (jour_adj), 1, 0);
  gtk_widget_show (jour);
  gtk_fixed_put (GTK_FIXED (fixed2), jour, 160, 16);
  gtk_widget_set_size_request (jour, 48, 24);

  mois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mois = gtk_spin_button_new (GTK_ADJUSTMENT (mois_adj), 1, 0);
  gtk_widget_show (mois);
  gtk_fixed_put (GTK_FIXED (fixed2), mois, 248, 16);
  gtk_widget_set_size_request (mois, 48, 24);

  ann__e_adj = gtk_adjustment_new (1, 1990, 2022, 1, 10, 10);
  ann__e = gtk_spin_button_new (GTK_ADJUSTMENT (ann__e_adj), 1, 0);
  gtk_widget_show (ann__e);
  gtk_fixed_put (GTK_FIXED (fixed2), ann__e, 344, 16);
  gtk_widget_set_size_request (ann__e, 48, 27);

  label6 = gtk_label_new (_("mois"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed2), label6, 208, 16);
  gtk_widget_set_size_request (label6, 40, 24);

  label7 = gtk_label_new (_("ann\303\251e"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed2), label7, 296, 16);
  gtk_widget_set_size_request (label7, 48, 25);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed2), entry1, 150, 48);
  gtk_widget_set_size_request (entry1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed2), entry2, 560, 48);
  gtk_widget_set_size_request (entry2, 160, 25);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed2), entry3, 152, 88);
  gtk_widget_set_size_request (entry3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  combobox2 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox2, 256, 168);
  gtk_widget_set_size_request (combobox2, 33, 31);

  combobox3 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox3);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox3, 224, 192);
  gtk_widget_set_size_request (combobox3, 33, 31);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed2), entry4, 560, 88);
  gtk_widget_set_size_request (entry4, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed2), entry5, 376, 136);
  gtk_widget_set_size_request (entry5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  date = gtk_label_new (_("date de naissance:   jour"));
  gtk_widget_show (date);
  gtk_fixed_put (GTK_FIXED (fixed2), date, 0, 8);
  gtk_widget_set_size_request (date, 160, 33);

  identifiant = gtk_label_new (_("identifiant:"));
  gtk_widget_show (identifiant);
  gtk_fixed_put (GTK_FIXED (fixed2), identifiant, 8, 49);
  gtk_widget_set_size_request (identifiant, 96, 16);

  nbr_conseiller = gtk_label_new (_("nbre des conseillers:\n"));
  gtk_widget_show (nbr_conseiller);
  gtk_fixed_put (GTK_FIXED (fixed2), nbr_conseiller, 400, 48);
  gtk_widget_set_size_request (nbr_conseiller, 136, 16);

  nbr_habitant = gtk_label_new (_("nbr d'habitants:"));
  gtk_widget_show (nbr_habitant);
  gtk_fixed_put (GTK_FIXED (fixed2), nbr_habitant, 8, 88);
  gtk_widget_set_size_request (nbr_habitant, 112, 17);

  municipalite = gtk_label_new (_("municipalit\303\251:"));
  gtk_widget_show (municipalite);
  gtk_fixed_put (GTK_FIXED (fixed2), municipalite, 432, 88);
  gtk_widget_set_size_request (municipalite, 96, 17);

  code_postal = gtk_label_new (_("code postal:"));
  gtk_widget_show (code_postal);
  gtk_fixed_put (GTK_FIXED (fixed2), code_postal, 256, 144);
  gtk_widget_set_size_request (code_postal, 104, 17);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed2), button1, 256, 192);
  gtk_widget_set_size_request (button1, 88, 29);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox1), label13, FALSE, FALSE, 0);

  ajouter = gtk_label_new (_("ajouter"));
  gtk_widget_show (ajouter);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), ajouter);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed3);

  entry6elec = gtk_entry_new ();
  gtk_widget_show (entry6elec);
  gtk_fixed_put (GTK_FIXED (fixed3), entry6elec, 160, 40);
  gtk_widget_set_size_request (entry6elec, 184, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6elec), 8226);

  entry7election = gtk_entry_new ();
  gtk_widget_show (entry7election);
  gtk_fixed_put (GTK_FIXED (fixed3), entry7election, 520, 40);
  gtk_widget_set_size_request (entry7election, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7election), 8226);

  entry8elec = gtk_entry_new ();
  gtk_widget_show (entry8elec);
  gtk_fixed_put (GTK_FIXED (fixed3), entry8elec, 160, 88);
  gtk_widget_set_size_request (entry8elec, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8elec), 8226);

  idmodelec = gtk_label_new (_("identifiant:"));
  gtk_widget_show (idmodelec);
  gtk_fixed_put (GTK_FIXED (fixed3), idmodelec, 8, 41);
  gtk_widget_set_size_request (idmodelec, 81, 16);

  entry9election = gtk_entry_new ();
  gtk_widget_show (entry9election);
  gtk_fixed_put (GTK_FIXED (fixed3), entry9election, 512, 88);
  gtk_widget_set_size_request (entry9election, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry9election), 8226);

  entry10election = gtk_entry_new ();
  gtk_widget_show (entry10election);
  gtk_fixed_put (GTK_FIXED (fixed3), entry10election, 400, 144);
  gtk_widget_set_size_request (entry10election, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10election), 8226);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed3), button2, 296, 224);
  gtk_widget_set_size_request (button2, 88, 29);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (button2), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox5), label28, FALSE, FALSE, 0);

  label27election = gtk_label_new (_("nbre des conseillers:"));
  gtk_widget_show (label27election);
  gtk_fixed_put (GTK_FIXED (fixed3), label27election, 368, 32);
  gtk_widget_set_size_request (label27election, 137, 41);

  label28elec = gtk_label_new (_("nbre d'habitants:"));
  gtk_widget_show (label28elec);
  gtk_fixed_put (GTK_FIXED (fixed3), label28elec, 8, 88);
  gtk_widget_set_size_request (label28elec, 128, 33);

  label29election = gtk_label_new (_("municipalite:"));
  gtk_widget_show (label29election);
  gtk_fixed_put (GTK_FIXED (fixed3), label29election, 384, 88);
  gtk_widget_set_size_request (label29election, 120, 25);

  label30election = gtk_label_new (_("code postal:"));
  gtk_widget_show (label30election);
  gtk_fixed_put (GTK_FIXED (fixed3), label30election, 280, 144);
  gtk_widget_set_size_request (label30election, 112, 25);

  modifier = gtk_label_new (_("modifier"));
  gtk_widget_show (modifier);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), modifier);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  entryelection_id7 = gtk_entry_new ();
  gtk_widget_show (entryelection_id7);
  gtk_fixed_put (GTK_FIXED (fixed4), entryelection_id7, 160, 24);
  gtk_widget_set_size_request (entryelection_id7, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryelection_id7), 8226);

  idsupp = gtk_label_new (_("identifant"));
  gtk_widget_show (idsupp);
  gtk_fixed_put (GTK_FIXED (fixed4), idsupp, 8, 32);
  gtk_widget_set_size_request (idsupp, 105, 17);

  labelelectiontrouver = gtk_label_new ("");
  gtk_widget_show (labelelectiontrouver);
  gtk_fixed_put (GTK_FIXED (fixed4), labelelectiontrouver, 120, 72);
  gtk_widget_set_size_request (labelelectiontrouver, 232, 48);

  button7_election_chercher = gtk_button_new ();
  gtk_widget_show (button7_election_chercher);
  gtk_fixed_put (GTK_FIXED (fixed4), button7_election_chercher, 344, 16);
  gtk_widget_set_size_request (button7_election_chercher, 104, 37);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button7_election_chercher), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label29 = gtk_label_new_with_mnemonic (_("chercher"));
  gtk_widget_show (label29);
  gtk_box_pack_start (GTK_BOX (hbox6), label29, FALSE, FALSE, 0);

  checkbutton1 = gtk_check_button_new_with_mnemonic (_("je suis sur"));
  gtk_widget_show (checkbutton1);
  gtk_fixed_put (GTK_FIXED (fixed4), checkbutton1, 48, 120);
  gtk_widget_set_size_request (checkbutton1, 160, 56);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed4), button6, 40, 176);
  gtk_widget_set_size_request (button6, 136, 29);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button6), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  suppression = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (suppression);
  gtk_box_pack_start (GTK_BOX (hbox3), suppression, FALSE, FALSE, 0);

  supprimer = gtk_label_new (_("supprimer"));
  gtk_widget_show (supprimer);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), supprimer);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed5);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed5), treeview1, 160, 96);
  gtk_widget_set_size_request (treeview1, 450, 224);

  label25 = gtk_label_new (_("liste des elections"));
  gtk_widget_show (label25);
  gtk_fixed_put (GTK_FIXED (fixed5), label25, 168, 41);
  gtk_widget_set_size_request (label25, 248, 16);

  buttonelctionaffichage = gtk_button_new ();
  gtk_widget_show (buttonelctionaffichage);
  gtk_fixed_put (GTK_FIXED (fixed5), buttonelctionaffichage, 584, 16);
  gtk_widget_set_size_request (buttonelctionaffichage, 136, 32);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (buttonelctionaffichage), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label26 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label26);
  gtk_box_pack_start (GTK_BOX (hbox4), label26, FALSE, FALSE, 0);

  afficher = gtk_label_new (_("afficher"));
  gtk_widget_show (afficher);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), afficher);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button7_election_chercher, "clicked",
                    G_CALLBACK (on_button7_election_chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonelctionaffichage, "clicked",
                    G_CALLBACK (on_buttonelctionaffichage_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window1, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window1, jour, "jour");
  GLADE_HOOKUP_OBJECT (window1, mois, "mois");
  GLADE_HOOKUP_OBJECT (window1, ann__e, "ann__e");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, label7, "label7");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (window1, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (window1, combobox2, "combobox2");
  GLADE_HOOKUP_OBJECT (window1, combobox3, "combobox3");
  GLADE_HOOKUP_OBJECT (window1, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (window1, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (window1, date, "date");
  GLADE_HOOKUP_OBJECT (window1, identifiant, "identifiant");
  GLADE_HOOKUP_OBJECT (window1, nbr_conseiller, "nbr_conseiller");
  GLADE_HOOKUP_OBJECT (window1, nbr_habitant, "nbr_habitant");
  GLADE_HOOKUP_OBJECT (window1, municipalite, "municipalite");
  GLADE_HOOKUP_OBJECT (window1, code_postal, "code_postal");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label13, "label13");
  GLADE_HOOKUP_OBJECT (window1, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (window1, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window1, entry6elec, "entry6elec");
  GLADE_HOOKUP_OBJECT (window1, entry7election, "entry7election");
  GLADE_HOOKUP_OBJECT (window1, entry8elec, "entry8elec");
  GLADE_HOOKUP_OBJECT (window1, idmodelec, "idmodelec");
  GLADE_HOOKUP_OBJECT (window1, entry9election, "entry9election");
  GLADE_HOOKUP_OBJECT (window1, entry10election, "entry10election");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window1, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window1, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1, label28, "label28");
  GLADE_HOOKUP_OBJECT (window1, label27election, "label27election");
  GLADE_HOOKUP_OBJECT (window1, label28elec, "label28elec");
  GLADE_HOOKUP_OBJECT (window1, label29election, "label29election");
  GLADE_HOOKUP_OBJECT (window1, label30election, "label30election");
  GLADE_HOOKUP_OBJECT (window1, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (window1, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window1, entryelection_id7, "entryelection_id7");
  GLADE_HOOKUP_OBJECT (window1, idsupp, "idsupp");
  GLADE_HOOKUP_OBJECT (window1, labelelectiontrouver, "labelelectiontrouver");
  GLADE_HOOKUP_OBJECT (window1, button7_election_chercher, "button7_election_chercher");
  GLADE_HOOKUP_OBJECT (window1, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window1, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window1, image6, "image6");
  GLADE_HOOKUP_OBJECT (window1, label29, "label29");
  GLADE_HOOKUP_OBJECT (window1, checkbutton1, "checkbutton1");
  GLADE_HOOKUP_OBJECT (window1, button6, "button6");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, suppression, "suppression");
  GLADE_HOOKUP_OBJECT (window1, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (window1, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window1, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window1, label25, "label25");
  GLADE_HOOKUP_OBJECT (window1, buttonelctionaffichage, "buttonelctionaffichage");
  GLADE_HOOKUP_OBJECT (window1, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window1, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window1, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1, label26, "label26");
  GLADE_HOOKUP_OBJECT (window1, afficher, "afficher");

  return window1;
}

