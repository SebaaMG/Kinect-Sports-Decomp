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
extern unsigned int *auStack_1f0;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F691F0();


longlong fn_8294F070(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_1f0 [496];
  
  uVar1 = **(uint **)(param_1 + 0x104);
  if ((uVar1 & 0xfff00000) == 0x20900000) {
    iVar3 = fn_82963998(0x74);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)fn_829632A0();
    }
    if (puVar4 == (undefined4 *)0x0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      lVar2 = fn_82963D50(puVar4,*(undefined4 *)(param_1 + 0x104));
      if (-1 < lVar2) {
        puVar4[3] = 1;
        *puVar4 = 0x20900001;
        puVar4[1] = 2;
        if ((uVar1 & 0xfffff) != 0) {
          *(undefined4 *)puVar4[4] = **(undefined4 **)(*(int *)(param_1 + 0x104) + 0x10);
          *(undefined4 *)puVar4[2] = **(undefined4 **)(*(int *)(param_1 + 0x104) + 8);
          *(undefined4 *)(puVar4[2] + 4) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + (uVar1 & 0xfffff) * 4);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_1f0,0xff,0xa0,param_4,param_5,0x11100000);
        }
      }
      fn_82BA02A8(puVar4);
      fn_829639F0(puVar4);
    }
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}

