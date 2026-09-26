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
extern int fn_82E260A8();
extern int fn_82E261C8();
extern unsigned int lbl_83187524;


ulonglong fn_82E26258(ulonglong param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if ((((param_2 & 0xffffffff) != 0) && (param_3 != 0)) && ((param_1 & 0xffffffff) != 0)) {
    lVar2 = fn_82E260A8(param_1,0);
    param_4 = -(uint)(lVar2 == 0) & param_4;
    iVar3 = fn_82E261C8(param_1);
    if (iVar3 == 0) {
      puVar4 = &lbl_83187524;
      lVar2 = 0x39;
      do {
        if ((param_1 & 0xffffffff) == (ulonglong)puVar4[-5]) {
          uVar1 = *puVar4;
          uVar6 = (ulonglong)uVar1;
          trapWord(6,uVar6,0);
          lVar5 = param_2 - (longlong)(int)((param_2 & 0xffffffff) / uVar6) * (longlong)(int)uVar1;
          uVar7 = param_2;
          if (lVar5 != 0) {
            uVar7 = (uVar6 - lVar5) + param_2;
          }
          uVar6 = ((ulonglong)uVar1 & 0x1fffffff) << 3;
          uVar7 = ((longlong)(int)puVar4[-1] * (longlong)(int)uVar7 & 0xffffffffU) / uVar6;
          trapWord(6,uVar6,0);
          if ((puVar4[-3] == 0) || (puVar4[-3] == 3)) {
            uVar7 = uVar7 + 3 & 0xfffffffc;
          }
          if (param_4 != 0) {
            uVar7 = -uVar7;
          }
        }
        puVar4 = puVar4 + 9;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      return uVar7;
    }
  }
  return 0;
}

