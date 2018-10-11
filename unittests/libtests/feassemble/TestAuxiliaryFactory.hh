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
// Copyright (c) 2010-2017 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

/**
 * @file unittests/libtests/feassemble/TestAuxiliaryFactory.hh
 *
 * @brief C++ TestAuxiliaryFactory object.
 *
 * C++ unit testing for AuxiliaryFactory.
 */

#if !defined(pylith_feassemble_testauxiliaryfactory_hh)
#define pylith_feassemble_testauxiliaryfactory_hh

#include <cppunit/extensions/HelperMacros.h>

#include "pylith/feassemble/feassemblefwd.hh" // HOLDSA AuxiliaryFactory

/// Namespace for pylith package
namespace pylith {
    namespace feassemble {
        class TestAuxiliaryFactory;
    } // feassemble
} // pylith

class pylith::feassemble::TestAuxiliaryFactory : public CppUnit::TestFixture {
    // CPPUNIT TEST SUITE //////////////////////////////////////////////////////////////////////////////////////////////
    CPPUNIT_TEST_SUITE(TestAuxiliaryFactory);

    CPPUNIT_TEST(testQueryDB);
    CPPUNIT_TEST(testSubfieldDiscretization);
    CPPUNIT_TEST(testInitialize);
    CPPUNIT_TEST(testInitializeSubfields);

    CPPUNIT_TEST_SUITE_END();

    // PUBLIC METHODS //////////////////////////////////////////////////////////////////////////////////////////////////
public:

    /// Setup testing data.
    void setUp(void);

    /// Tear down testing data.
    void tearDown(void);

    /// Test setQueryDB() and getQueryDB().
    void testQueryDB(void);

    /// Test setSubfieldDiscretization() and getSubfieldDiscretization().
    void testSubfieldDiscretization(void);

    /// Test initialize().
    void testInitialize(void);

    /// Test initializeSubfields().
    void testInitializeSubfields(void);

    // PRIVATE METHODS /////////////////////////////////////////////////////////////////////////////////////////////////
private:

    pylith::feassemble::AuxiliaryFactory* _factory; ///< Test subject.

}; // class TestAuxiliaryFactory

#endif // pylith_feassemble_testauxiliaryfactory_hh

// End of file
