/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.6.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // D:/Softwareentwicklung/Versionsverwaltung/Mithisoft/CenterDot/src/centerdot.ico
  0x0,0x0,0x0,0xb9,
  0x0,
  0x0,0x9,0x7e,0x78,0x9c,0xed,0x96,0xc1,0xd,0xc2,0x30,0xc,0x45,0xbf,0x23,0xe,
  0x3d,0x66,0x0,0xe,0x3d,0xa1,0x8e,0xc0,0xad,0x59,0xa9,0x13,0xb4,0x13,0x74,0xe,
  0x8e,0x4c,0xc3,0x34,0x55,0x8d,0xdd,0x54,0x34,0xa,0x28,0x81,0x3,0x20,0x44,0x9e,
  0xf4,0xe5,0xd8,0xfe,0xb2,0x12,0x45,0x8a,0x2,0x10,0xc,0xac,0x35,0x12,0x9,0x67,
  0x0,0x7,0x51,0x5d,0x43,0xb2,0xa,0xa7,0xa,0xb8,0x48,0xde,0x88,0xac,0xd6,0x81,
  0xc5,0x97,0x82,0x99,0x97,0x48,0xc3,0xa6,0x90,0x6e,0xf4,0xa,0x89,0xbd,0x73,0xf,
  0x4c,0xed,0x26,0xcd,0x75,0xec,0xd8,0x1,0xbb,0xda,0x4b,0xd7,0x5a,0x7b,0xe4,0x6d,
  0xd6,0xbd,0x3a,0xf8,0x73,0xe4,0xf6,0xeb,0x9c,0x4b,0x7a,0xa,0x85,0xc2,0xdf,0x43,
  0xe9,0x97,0xaf,0xf4,0x33,0xfd,0x37,0x63,0x88,0x4c,0x54,0xa2,0x1b,0x6b,0x12,0xd5,
  0x72,0xfd,0xdc,0xfc,0xcf,0xf2,0xed,0xfb,0xfb,0xf5,0xfe,0x1d,0x3c,0xf7,0xcc,0x53,
  0xfb,0x9c,0xd4,0xab,0x48,0x1c,0xf6,0x47,0xf9,0x56,0xc8,0x8f,0x48,0xa4,0xeb,0xb0,
  0xf7,0xca,0xbc,0x2b,0x26,0x10,0x82,0x9a,
  
};

static const unsigned char qt_resource_name[] = {
  // icons
  0x0,0x5,
  0x0,0x6f,0xa6,0x53,
  0x0,0x69,
  0x0,0x63,0x0,0x6f,0x0,0x6e,0x0,0x73,
    // centerdot.ico
  0x0,0xd,
  0x8,0xec,0x17,0x3f,
  0x0,0x63,
  0x0,0x65,0x0,0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,0x64,0x0,0x6f,0x0,0x74,0x0,0x2e,0x0,0x69,0x0,0x63,0x0,0x6f,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/icons
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/icons/centerdot.ico
  0x0,0x0,0x0,0x10,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)(); }
   } dummy;
}
