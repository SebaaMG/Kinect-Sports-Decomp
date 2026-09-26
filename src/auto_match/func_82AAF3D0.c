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
extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern int fn_82AAD090();


void fn_82AAF3D0(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *apuStack_50 [20];
  
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (undefined4 *)*param_5;
  uVar3 = *(uint *)(iVar1 + 4);
  uVar4 = *(undefined4 *)(iVar1 + 8);
  uVar6 = ((ulonglong)(uVar3 >> 0x14) & 0x700 | (ulonglong)uVar3 & 0x1800) >> 8;
  if (uVar6 != 3) {
    fn_82A29A38();
  }
  uVar5 = fn_82AAC8C0(uVar6,(uVar3 & 0x7ff) + 1,param_4,apuStack_50);
  *puVar2 = 0x22;
  puVar2[1] = ((uint)apuStack_50[0] & 0x3f) << 0x10 | 0x400000 | uVar5 & 0xffff;
  puVar2[2] = 1;
  puVar2[3] = uVar3 & 0x7ff | 0x110000;
  apuStack_50[0] = puVar2 + 4;
  fn_82AAD090(uVar4,0,0,param_4,apuStack_50);
  *param_5 = apuStack_50[0];
  *param_1 = iVar1 + 0xc;
  return;
}

