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
#define _uStack00000030 ((*(U64*)&uStack00000030))
#define _uStack00000038 ((*(U64*)&uStack00000038))
extern int fn_82CF8740();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


void fn_82CF84B0(int *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  
  _uStack00000030 = param_4;
  _uStack00000038 = param_5;
  if (param_1[2] < param_1[1] << 1) {
    fn_82CF8740(param_1,param_2,(param_1[2] + 1) * 2);
  }
  iVar1 = *param_1;
  iVar3 = 1;
  uVar4 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar5 = uVar4 * 0x10;
  iVar2 = *(int *)(iVar1 + iVar5);
  do {
    if (iVar2 == -1) {
LAB_82cf8554:
      param_1[1] = iVar3 + param_1[1];
      *(uint *)(iVar1 + iVar5) = param_3;
      iVar5 = iVar5 + *param_1;
      *(undefined4 *)(iVar5 + 4) = uStack00000030;
      *(undefined4 *)(iVar5 + 8) = uStack00000034;
      *(undefined4 *)(iVar5 + 0xc) = uStack00000038;
      return;
    }
    if (*(uint *)(iVar1 + iVar5) == param_3) {
      iVar3 = 0;
      goto LAB_82cf8554;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    iVar5 = uVar4 * 0x10;
    iVar2 = *(int *)(iVar5 + *param_1);
  } while( true );
}

