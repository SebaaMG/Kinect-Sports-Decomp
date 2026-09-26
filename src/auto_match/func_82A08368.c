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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82A05578();
extern unsigned int lbl_821AAD20;


byte fn_82A08368(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int aiStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  puVar1 = (undefined4 *)((int)((param_3 & 0xffffffff) << 4) + param_1 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (((fStack_20 != lbl_821AAD20) || (fStack_1c != lbl_821AAD20)) || (fStack_18 != lbl_821AAD20)) {
    if (*(int *)((int)((param_3 + 0x103c & 0xffffffff) << 2) + param_1) == 2) {
      aiStack_30[0] = 0;
      lVar3 = fn_82A05578(param_2,7,7,aiStack_30);
      if (aiStack_30[0] == 0x31) {
        return -(lVar3 != 0x31) & 1;
      }
    }
  }
  return 1;
}

