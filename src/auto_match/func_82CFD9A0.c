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
extern unsigned int *auStack_50;
extern int fn_82CE7E68();
extern int fn_82CFBEB0();
extern int fn_82D04540();
extern int fn_82D04E70();
extern int fn_82D05178();


longlong fn_82CFD9A0(longlong param_1)

{
  int iVar3;
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined1 auStack_50 [80];
  
  iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c4c,5);
  if (iVar3 == 0) {
    lVar1 = 0x18;
  }
  else {
    iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c44,6);
    if (iVar3 == 0) {
      lVar1 = 0x1f;
    }
    else {
      iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c38,8);
      if (iVar3 == 0) {
        lVar1 = 0x16;
      }
      else {
        iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c28,0xe);
        if (iVar3 == 0) {
          lVar1 = 0x1a;
        }
        else {
          iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c20,5);
          if (iVar3 == 0) {
            lVar1 = 0x1d;
          }
          else {
            iVar3 = thunk_FUN_82f65390(param_1,0xffffffff82133c14,0xb);
            if (iVar3 == 0) {
              lVar1 = 0x21;
            }
            else {
              iVar3 = fn_82CFBEB0(param_1,0x2a);
              if ((iVar3 == 0) || (*(char *)(iVar3 + 1) != '\0')) {
                fn_82D05178(auStack_50,param_1);
                uVar2 = thunk_FUN_82f66570(param_1,0x5b);
                if ((uVar2 & 0xffffffff) != 0) {
                  fn_82D04E70(auStack_50,0,uVar2 - param_1);
                }
                lVar1 = 0;
                puVar4 = (undefined4 *)0x8317f684;
                do {
                  iVar3 = fn_82D04540(auStack_50,*puVar4);
                  if (iVar3 != 0) {
                    fn_82CE7E68(auStack_50);
                    return lVar1;
                  }
                  puVar4 = puVar4 + 3;
                  lVar1 = lVar1 + 1;
                } while ((int)puVar4 < -0x7ce807e4);
                fn_82CE7E68(auStack_50);
                lVar1 = 0;
              }
              else {
                lVar1 = 0x14;
              }
            }
          }
        }
      }
    }
  }
  return lVar1;
}

