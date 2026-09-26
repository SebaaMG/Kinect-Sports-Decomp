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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_83032D88();
extern int fn_83032FB8();
extern int fn_83032FD0();
extern int fn_83033018();
extern int fn_83033038();
extern int fn_83033070();
extern int fn_83033110();
extern int fn_83033360();
extern int fn_830337B0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


void fn_83038C98(int *param_1)

{
  undefined4 uVar1;
  int *piVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  fn_82FEFC98();
  if ((((*(byte *)((int)param_1 + 0xd9) & 2) == 0) &&
      ((**(code **)(*param_1 + 0x3c))(param_1,1), (param_1[0x78] & 0xf0000000U) == 0x40000000)) &&
     (param_1[0x77] != 0)) {
    piVar6 = param_1 + 0x62;
    piVar3 = (int *)fn_83033360(0x5011,0,piVar6);
    if (piVar3 != (int *)0x0) {
      uVar2 = fn_82FA5060(lbl_831BC768,0x38);
      if (((uVar2 & 0xffffffff) != 0) &&
         (puVar4 = (undefined4 *)fn_8300FA30(uVar2,param_1[0x1c]), puVar4 != (undefined4 *)0x0))
      {
        piVar3[0x27] = param_1[0x4c];
        fn_83032FB8(piVar3,param_1 + 99);
        (**(code **)(*piVar3 + 0x14))(piVar3,param_1[0x77]);
        fn_83032FD0(piVar3,param_1[0x75]);
        iVar5 = fn_83033070(piVar3,param_1[0x16],*(byte *)(param_1 + 0x18) >> 7,puVar4);
        if ((iVar5 == 1) &&
           (iVar5 = fn_83033110(piVar3,param_1[0x17],*(byte *)(param_1 + 0x18) >> 6 & 1,puVar4),
           iVar5 == 1)) {
          fn_830337B0(piVar3,param_1 + 0x5f);
          if ((*(byte *)((int)param_1 + 0xda) & 0x80) != 0) {
            fn_83033038(piVar3);
          }
          fn_83033018(piVar3,param_1[0x19]);
          puVar4[2] = piVar3;
          *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_1 + 0x14);
          fn_8300FCF0(lbl_832642E4,puVar4);
        }
        else {
          uVar1 = lbl_831BC768;
          (**(code **)*puVar4)(puVar4,0);
          fn_82FA5190(uVar1,puVar4);
        }
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      *(byte *)((int)param_1 + 0xd9) = *(byte *)((int)param_1 + 0xd9) | 0x10;
    }
    iVar5 = *piVar6;
    *piVar6 = 0;
    if (iVar5 != 0) {
      fn_83032D88();
    }
    param_1[0x77] = 0;
  }
  fn_82FEFCC8(param_1);
  return;
}

