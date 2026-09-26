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
extern unsigned int *auStack_20;
extern int fn_82814D10();
extern int fn_828184A8();
extern int fn_82820EF8();
extern int fn_82F65390();


undefined8 fn_828220E0(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  uint auStack_20 [2];
  
  iVar2 = fn_82F65390(*(undefined4 *)(param_1 + 0x1c),0xffffffff8201ebe0,4);
  if (iVar2 == 0) {
    iVar2 = fn_82F65390((ulonglong)*(uint *)(param_1 + 0x1c) + 4,0xffffffff8201ebe8,0xd);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x20) == 0) ||
         (iVar2 = fn_82F65390((ulonglong)*(uint *)(param_1 + 0x1c) + 4,
                               (ulonglong)*(uint *)(*(int *)(param_1 + 0x20) + 0x1c) + 0x14,0xd),
         iVar2 == 0)) {
        auStack_20[0] = *(uint *)(*(int *)(param_1 + 0x1c) + 0x20);
        iVar2 = fn_82814D10(param_1);
        if (iVar2 != 0) {
          fn_82820EF8(auStack_20,4);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x20) = 0;
        uVar3 = fn_828184A8(*(undefined4 *)(param_1 + 0x1c),0x80);
        if (uVar3 == auStack_20[0]) {
          *(uint *)(*(int *)(param_1 + 0x1c) + 0x20) = auStack_20[0];
          iVar2 = fn_82814D10(param_1);
          if (iVar2 != 0) {
            fn_82820EF8(auStack_20,4);
          }
          uVar1 = 0;
        }
        else {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

