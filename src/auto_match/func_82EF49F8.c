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
#define _auStack_10 ((*(U64*)&auStack_10))
extern unsigned int *auStack_10;
extern int fn_82EF4920();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_d;


undefined8 fn_82EF49F8(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000014;
  undefined1 auStack_10 [3];
  undefined1 uStack_d;
  
  uStack00000014 = param_1;
  iVar1 = fn_82EF4920(&stack0x00000014,param_2,8,0x2d);
  iVar2 = (int)param_2;
  if ((iVar1 != 0) && (iVar1 = fn_82EF4920(&stack0x00000014,auStack_10,4,0x2d), iVar1 != 0)) {
    *(short *)(iVar2 + 4) = (short)_auStack_10;
    iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
    if (iVar1 != 0) {
      *(short *)(iVar2 + 6) = (short)_auStack_10;
      iVar1 = fn_82EF4920(&stack0x00000014,auStack_10,2,0);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar2 + 8) = uStack_d;
        iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
        if (iVar1 != 0) {
          *(undefined1 *)(iVar2 + 9) = uStack_d;
          iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
          if (iVar1 != 0) {
            *(undefined1 *)(iVar2 + 10) = uStack_d;
            iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
            if (iVar1 != 0) {
              *(undefined1 *)(iVar2 + 0xb) = uStack_d;
              iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
              if (iVar1 != 0) {
                *(undefined1 *)(iVar2 + 0xc) = uStack_d;
                iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                if (iVar1 != 0) {
                  *(undefined1 *)(iVar2 + 0xd) = uStack_d;
                  iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                  if (iVar1 != 0) {
                    *(undefined1 *)(iVar2 + 0xe) = uStack_d;
                    iVar1 = fn_82EF4920(&stack0x00000014,auStack_10);
                    if (iVar1 != 0) {
                      *(undefined1 *)(iVar2 + 0xf) = uStack_d;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

