// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2015 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

/** @file libsrc/materials/IsotropicLinearElasticityPlaneStrain.hh
 *
 * @brief C++ class for isotropic linear elastic plane strain material.
 */

#if !defined(pylith_materials_isotropiclinearelasticityplanestrain_hh)
#define pylith_materials_isotropiclinearelasticityplanestrain_hh

// Include directives ---------------------------------------------------
#include "materialsfwd.hh" // forward declarations

#include "pylith/materials/MaterialNew.hh" // ISA Material

// Material -------------------------------------------------------------
/** @brief C++ class for isotropic linear elastic plane strain material.
 */

class pylith::materials::IsotropicLinearElasticityPlaneStrain : public pylith::materials::MaterialNew
{ // class IsotropicLinearElasticityPlaneStrain
  friend class TestIsotropicLinearElasticityPlaneStrain; // unit testing

  // PUBLIC METHODS /////////////////////////////////////////////////////
public :

  /// Default constructor.
  IsotropicLinearElasticityPlaneStrain(void);

  /// Destructor.
  ~IsotropicLinearElasticityPlaneStrain(void);

  /** Include inertia?
   *
   * @param value Flag indicating to include inertial term.
   */
  void useInertia(const bool value);

  /** Include body force?
   *
   * @param value Flag indicating to include body force term.
   */
  void useBodyForce(const bool value);

  /** Preinitialize material. Set names/sizes of auxiliary fields.
   *
   * @param mesh Finite-element mesh.
   */
  void preinitialize(const topology::Mesh& mesh);
 

  // PROTECTED METHODS //////////////////////////////////////////////////
protected :

  /** Set residual and Jacobian kernels.
   *
   * @param field Solution field.
   * @param prob PETSc discretization object.
   */
  void
  _setFEKernels(const topology::Field& field,
		const PetscDS prob) const;

  // PRIVATE MEMBERS ////////////////////////////////////////////////////
private :

  bool _useInertia; ///< Flag to include inertial term.
  bool _useBodyForce; ///< Flag to include body force term.

  // NOT IMPLEMENTED ////////////////////////////////////////////////////
private :

  IsotropicLinearElasticityPlaneStrain(const IsotropicLinearElasticityPlaneStrain&); ///< Not implemented.
  const IsotropicLinearElasticityPlaneStrain& operator=(const IsotropicLinearElasticityPlaneStrain&); ///< Not implemented

}; // class IsotropicLinearElasticityPlaneStrain

#endif // pylith_materials_isotropiclinearelasticityplanestrain_hh


// End of file 