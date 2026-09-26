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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_8257A9F0();
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828647C0();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_8287A7A8();
extern int fn_8287A7D8();
extern int fn_82FE93B8();
extern unsigned int uStack_12c;
extern unsigned int uStack_150;


undefined8 fn_8286F158(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar8;
  ulonglong uVar2;
  undefined4 *******pppppppuVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_150;
  undefined1 auStack_14c [12];
  undefined4 ******appppppuStack_140 [5];
  uint uStack_12c;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  puVar7 = *(undefined4 **)(param_1 + 0x14);
  if (puVar7 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      uVar1 = fn_8287A7A8(*puVar7);
      cVar8 = fn_828647C0(uVar1,param_2);
      if (cVar8 == '\0') {
        uVar1 = fn_82811400(auStack_80,4);
        uVar2 = fn_82811080(0xffffffff832116f8,0x30,uVar1);
        if ((uVar2 & 0xffffffff) == 0) {
          uStack_150 = 0;
        }
        else {
          uStack_150 = fn_8287A7D8(uVar2,param_2);
        }
        fn_8257A9F0(param_1 + 0x14,&uStack_150);
        fn_828648B8(auStack_120,param_2);
        fn_8223B688(appppppuStack_140,auStack_120);
        fn_82230300(auStack_120,1,0);
        pppppppuVar5 = (undefined4 *******)appppppuStack_140[0];
        if (uStack_12c < 0x10) {
          pppppppuVar5 = appppppuStack_140;
        }
        uVar1 = fn_82FE93B8(pppppppuVar5,0xffffffff8286e9b0,uStack_150,0xffffffffffffffff,
                                  auStack_14c);
        if ((int)uVar1 != 1) {
          fn_828648B8(auStack_c0,param_2);
          uVar3 = fn_8223B688(auStack_a0,auStack_c0);
          uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82021aa0,0x1b);
          uVar3 = fn_8223DFF0(uVar3,0xffffffff82021a98,4);
          fn_82240378(auStack_e0,uVar3);
          fn_82230300(auStack_a0,1,0);
          fn_82230300(auStack_c0,1,0);
          uVar3 = fn_8223B688(auStack_80,auStack_e0);
          uVar4 = fn_82868378();
          fn_8286DA10(uVar4,uVar3,uVar1);
          fn_82865170();
          fn_82866418();
          fn_828648B8(auStack_100,param_2);
          fn_82865170();
          piVar6 = (int *)fn_828663F0();
          puVar7 = (undefined4 *)fn_8223B688(auStack_60,auStack_100);
          if (0xf < (uint)puVar7[5]) {
            puVar7 = (undefined4 *)*puVar7;
          }
          (**(code **)(*piVar6 + 0xc))(piVar6,0xffffffff82021ae8,0x393,0xffffffff82021abc,puVar7);
          fn_82230300(auStack_60,1,0);
          fn_82230300(auStack_100,1,0);
          fn_82230300(auStack_e0,1,0);
          fn_82230300(appppppuStack_140,1,0);
          return 0xffffffffa0100000;
        }
        fn_82230300(appppppuStack_140,1,0);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(param_1 + 0x18));
  }
  return 0x20100000;
}

