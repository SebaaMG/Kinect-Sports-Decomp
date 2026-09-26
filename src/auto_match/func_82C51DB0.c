typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82CAD4C0();


undefined8 fn_82C51DB0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82CAD4C0(param_1,param_1 + 0x7c8,*(undefined4 *)(param_1 + 0xd30),
                            0xffffffff82101e10,6);
  if ((((((iVar1 == 0) &&
         (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x7d4,*(undefined4 *)(param_1 + 0xd30),
                                    0xffffffff82100cd8,6), iVar1 == 0)) &&
        (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x848,*(undefined4 *)(param_1 + 0xd30),
                                   0xffffffff82103768,7), iVar1 == 0)) &&
       ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x854,*(undefined4 *)(param_1 + 0xd30),
                                   0xffffffff82103560,6), iVar1 == 0 &&
        (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x864,*(undefined4 *)(param_1 + 0xd30),
                                   0xffffffff82102f48,6), iVar1 == 0)))) &&
      (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x870,*(undefined4 *)(param_1 + 0xd30),
                                 0xffffffff82103150,6), iVar1 == 0)) &&
     (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x87c,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff82103358,6), iVar1 == 0)) {
    iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8ec,*(undefined4 *)(param_1 + 0xd30),
                              0xffffffff82104010,0x88);
    if (iVar1 == 0) {
      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8f8,*(undefined4 *)(param_1 + 0xd30),
                                0xffffffff82104118,0x88);
      if (iVar1 == 0) {
        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x904,*(undefined4 *)(param_1 + 0xd30),
                                  0xffffffff82104220,0x88);
        if (iVar1 == 0) {
          iVar1 = fn_82CAD4C0(param_1,param_1 + 0x910,*(undefined4 *)(param_1 + 0xd30),
                                    0xffffffff82104328,0x88);
          if (iVar1 == 0) {
            *(int *)(param_1 + 0x950) = param_1 + 0x8ec;
            *(int *)(param_1 + 0x954) = param_1 + 0x8f8;
            *(int *)(param_1 + 0x958) = param_1 + 0x904;
            *(int *)(param_1 + 0x95c) = param_1 + 0x910;
            iVar1 = fn_82CAD4C0(param_1,param_1 + 0x91c,*(undefined4 *)(param_1 + 0xd30),
                                      0xffffffff82104430,0x8a);
            if (iVar1 == 0) {
              iVar1 = fn_82CAD4C0(param_1,param_1 + 0x928,*(undefined4 *)(param_1 + 0xd30),
                                        0xffffffff82104558,0x8a);
              if (iVar1 == 0) {
                iVar1 = fn_82CAD4C0(param_1,param_1 + 0x934,*(undefined4 *)(param_1 + 0xd30),
                                          0xffffffff82104680,0x8a);
                if (iVar1 == 0) {
                  iVar1 = fn_82CAD4C0(param_1,param_1 + 0x940,*(undefined4 *)(param_1 + 0xd30)
                                            ,0xffffffff821047a8,0x8a);
                  if (iVar1 == 0) {
                    *(int *)(param_1 + 0x960) = param_1 + 0x91c;
                    *(int *)(param_1 + 0x964) = param_1 + 0x928;
                    *(int *)(param_1 + 0x968) = param_1 + 0x934;
                    *(int *)(param_1 + 0x96c) = param_1 + 0x940;
                    if (*(int *)(param_1 + 0x5720) != 0) {
                      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5758,
                                                *(undefined4 *)(param_1 + 0xd30),0xffffffff821048d0,
                                                8);
                      if (iVar1 != 0) {
                        return 0xfffffffffffffff7;
                      }
                      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5764,
                                                *(undefined4 *)(param_1 + 0xd30),0xffffffff82104a00,
                                                8);
                      if (iVar1 != 0) {
                        return 0xfffffffffffffff7;
                      }
                      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5770,
                                                *(undefined4 *)(param_1 + 0xd30),0xffffffff82104b30,
                                                8);
                      if (iVar1 != 0) {
                        return 0xfffffffffffffff7;
                      }
                      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x577c,
                                                *(undefined4 *)(param_1 + 0xd30),0xffffffff82104c60,
                                                8);
                      if (iVar1 != 0) {
                        return 0xfffffffffffffff7;
                      }
                      *(int *)(param_1 + 0x960) = param_1 + 0x5758;
                      *(int *)(param_1 + 0x964) = param_1 + 0x5764;
                      *(int *)(param_1 + 0x968) = param_1 + 0x5770;
                      *(int *)(param_1 + 0x96c) = param_1 + 0x577c;
                    }
                    iVar1 = fn_82CAD4C0(param_1,param_1 + 0x574c,
                                              *(undefined4 *)(param_1 + 0xd30),0xffffffff82104d90,8)
                    ;
                    if ((((iVar1 == 0) &&
                         (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x98c,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104e50,0x86), iVar1 == 0)) &&
                        ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x998,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104e10,0x86), iVar1 == 0 &&
                         (((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9a4,
                                                      *(undefined4 *)(param_1 + 0xd30),
                                                      0xffffffff82104dd0,0x86), iVar1 == 0 &&
                           (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9b4,
                                                      *(undefined4 *)(param_1 + 0xd30),
                                                      0xffffffff82104e90,0x88), iVar1 == 0)) &&
                          (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9c0,
                                                     *(undefined4 *)(param_1 + 0xd30),
                                                     0xffffffff82104ed8,0x88), iVar1 == 0)))))) &&
                       (((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9cc,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104f20,0x88), iVar1 == 0 &&
                         (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9dc,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104f64,0x86), iVar1 == 0)) &&
                        ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9e8,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104f88,0x86), iVar1 == 0 &&
                         (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x9f4,
                                                    *(undefined4 *)(param_1 + 0xd30),
                                                    0xffffffff82104fac,0x86), iVar1 == 0)))))) {
                      if (*(int *)(param_1 + 0x3cb0) == 7) {
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5134,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107018,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5140,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107058,7);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x514c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107098,7);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5158,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821070d8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x5124) = param_1 + 0x5134;
                        *(int *)(param_1 + 0x5128) = param_1 + 0x5140;
                        *(int *)(param_1 + 0x512c) = param_1 + 0x514c;
                        *(int *)(param_1 + 0x5130) = param_1 + 0x5158;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5174,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107118,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5180,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107140,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x518c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107168,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5198,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107190,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x5164) = param_1 + 0x5174;
                        *(int *)(param_1 + 0x5168) = param_1 + 0x5180;
                        *(int *)(param_1 + 0x516c) = param_1 + 0x518c;
                        *(int *)(param_1 + 0x5170) = param_1 + 0x5198;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5210,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821071b8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x521c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821072b8,7);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5228,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821073b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5234,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821074b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5240,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821075b8,7);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x524c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821076b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5258,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821077b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5264,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821078b8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x54d8) = param_1 + 0x5210;
                        *(int *)(param_1 + 0x54dc) = param_1 + 0x521c;
                        *(int *)(param_1 + 0x54e0) = param_1 + 0x5228;
                        *(int *)(param_1 + 0x54e4) = param_1 + 0x5234;
                        *(int *)(param_1 + 0x54e8) = param_1 + 0x5240;
                        *(int *)(param_1 + 0x54ec) = param_1 + 0x524c;
                        *(int *)(param_1 + 0x54f0) = param_1 + 0x5258;
                        *(int *)(param_1 + 0x54f4) = param_1 + 0x5264;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5270,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821079b8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x527c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107bb8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5288,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107db8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5294,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107fb8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52a0,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821081b8,7);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52ac,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821083b8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52b8,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821085b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52c4,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821087b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52d0,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff821089b8,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52dc,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82108ae0,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52e8,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82108c08,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x52f4,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82108d30,8);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5300,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106cfc,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x530c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106d5c,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5318,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106dbc,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5324,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106e1c,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5330,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106e38,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x533c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106e54,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5348,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106e70,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5354,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106e8c,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x51c8) = param_1 + 0x5300;
                        *(int *)(param_1 + 0x51cc) = param_1 + 0x530c;
                        *(int *)(param_1 + 0x51d0) = param_1 + 0x5318;
                        *(int *)(param_1 + 0x51d4) = param_1 + 0x5324;
                        *(int *)(param_1 + 0x51d8) = param_1 + 0x5330;
                        *(int *)(param_1 + 0x51dc) = param_1 + 0x533c;
                        *(int *)(param_1 + 0x51e0) = param_1 + 0x5348;
                        *(int *)(param_1 + 0x51e4) = param_1 + 0x5354;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5360,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106ea8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x536c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106ecc,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5378,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106ef0,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5384,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106f14,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5390,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106f38,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x539c,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106f5c,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53a8,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106f80,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53b4,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106fa4,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x51a8) = param_1 + 0x5360;
                        *(int *)(param_1 + 0x51ac) = param_1 + 0x536c;
                        *(int *)(param_1 + 0x51b0) = param_1 + 0x5378;
                        *(int *)(param_1 + 0x51b4) = param_1 + 0x5384;
                        *(int *)(param_1 + 0x51b8) = param_1 + 0x5390;
                        *(int *)(param_1 + 0x51bc) = param_1 + 0x539c;
                        *(int *)(param_1 + 0x51c0) = param_1 + 0x53a8;
                        *(int *)(param_1 + 0x51c4) = param_1 + 0x53b4;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53c0,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106cb8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53cc,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106d18,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53d8,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106d78,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53e4,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106dd8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x51ec) = param_1 + 0x53c0;
                        *(int *)(param_1 + 0x51f0) = param_1 + 0x53cc;
                        *(int *)(param_1 + 0x51f4) = param_1 + 0x53d8;
                        *(int *)(param_1 + 0x51f8) = param_1 + 0x53e4;
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53f0,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106fc8,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x53fc,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106fdc,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5408,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82106ff0,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        iVar1 = fn_82CAD4C0(param_1,param_1 + 0x5414,
                                                  *(undefined4 *)(param_1 + 0xd30),
                                                  0xffffffff82107004,6);
                        if (iVar1 != 0) {
                          return 0xfffffffffffffff7;
                        }
                        *(int *)(param_1 + 0x5200) = param_1 + 0x53f0;
                        *(int *)(param_1 + 0x5204) = param_1 + 0x53fc;
                        *(int *)(param_1 + 21000) = param_1 + 0x5408;
                        *(int *)(param_1 + 0x520c) = param_1 + 0x5414;
                      }
                      iVar1 = fn_82CAD4C0(param_1,param_1 + 0x7fc,
                                                *(undefined4 *)(param_1 + 0xd30),0xffffffff82103870,
                                                6);
                      if (((((iVar1 == 0) &&
                            (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x808,
                                                       *(undefined4 *)(param_1 + 0xd30),
                                                       0xffffffff82103a58,6), iVar1 == 0)) &&
                           ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x814,
                                                       *(undefined4 *)(param_1 + 0xd30),
                                                       0xffffffff82103c40,8), iVar1 == 0 &&
                            (((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x820,
                                                         *(undefined4 *)(param_1 + 0xd30),
                                                         0xffffffff82103e28,7), iVar1 == 0 &&
                              (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x888,
                                                         *(undefined4 *)(param_1 + 0xd30),
                                                         0xffffffff820ffa40,0x8a), iVar1 == 0)) &&
                             (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x894,
                                                        *(undefined4 *)(param_1 + 0xd30),
                                                        0xffffffff820ffce8,0x8a), iVar1 == 0))))))
                          && ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8a0,
                                                         *(undefined4 *)(param_1 + 0xd30),
                                                         0xffffffff820fffd8,0x8a), iVar1 == 0 &&
                              (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8ac,
                                                         *(undefined4 *)(param_1 + 0xd30),
                                                         0xffffffff82100230,0x8a), iVar1 == 0)))) &&
                         ((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8b8,
                                                     *(undefined4 *)(param_1 + 0xd30),
                                                     0xffffffff82100448,0x8a), iVar1 == 0 &&
                          (((iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8c4,
                                                       *(undefined4 *)(param_1 + 0xd30),
                                                       0xffffffff821005e8,0x8a), iVar1 == 0 &&
                            (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x980,
                                                       *(undefined4 *)(param_1 + 0xd30),
                                                       0xffffffff82100788,0x8a), iVar1 == 0)) &&
                           (iVar1 = fn_82CAD4C0(param_1,param_1 + 0x8d0,
                                                      *(undefined4 *)(param_1 + 0xd30),
                                                      0xffffffff82100a48,0x8a), iVar1 == 0)))))) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xfffffffffffffff7;
}

