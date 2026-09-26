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
extern int fn_8301BA90();
extern int fn_8301BEA0();
extern int fn_8301CFE8();
extern int fn_8303A630();
extern int fn_8303A720();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined8 fn_8301D4F0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iStack0000001c;
  int aiStack_40 [16];
  
  iStack0000001c = param_2;
  uVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 0xc))
                    (*(int *)(param_1 + 0xc) + 0xc0,&stack0x0000001c);
  param_2 = param_2 - iStack0000001c;
  if ((int)uVar3 == 0x11) {
    if (*(int *)(param_1 + 0x10) != 0) {
      while( true ) {
        fn_8301CFE8(*(undefined4 *)(param_1 + 0xc),0);
        iVar1 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0xc) = iVar1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        piVar2 = *(int **)(iVar1 + 0xfc);
        if ((*(byte *)(piVar2 + 3) & 0x80) == 0) break;
LAB_8301d5d4:
        fn_8303A720(piVar2);
        (**(code **)(*(int *)piVar2[2] + 0x24))((int *)piVar2[2],param_1 + 0x160);
        if (param_2 == 0) {
          return 0x2d;
        }
        aiStack_40[0] = param_2;
        uVar3 = (**(code **)(*(int *)(iVar1 + 0xc0) + 0xc))(iVar1 + 0xc0,aiStack_40);
        param_2 = param_2 - aiStack_40[0];
        if ((int)uVar3 == 0x2d) {
          return uVar3;
        }
        if ((int)uVar3 != 0x11) goto LAB_8301d5b8;
        if (param_2 == 0) {
          return uVar3;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          return uVar3;
        }
      }
      iVar4 = (**(code **)(*piVar2 + 0x20))(piVar2);
      if (iVar4 == 1) {
        *(byte *)(piVar2 + 3) = *(byte *)(piVar2 + 3) | 0x80;
        iVar4 = fn_8301BEA0(param_1,iVar1);
        if (iVar4 == 1) goto LAB_8301d5d4;
      }
      else {
        if (iVar4 == 0x3f) {
          return uVar3;
        }
        if (iVar4 != 2) goto LAB_8301d5d4;
      }
LAB_8301d5b8:
      uVar3 = 2;
    }
  }
  else if ((int)uVar3 == 2) {
    uVar3 = 0x2e;
    fn_8301BA90(param_1);
    fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return uVar3;
}

