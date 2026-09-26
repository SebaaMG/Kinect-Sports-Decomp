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
extern unsigned int *auStack_154;
extern unsigned int *auStack_180;
extern int fn_8265CAA0();
extern int fn_82A1E658();
extern int fn_82A2A438();
extern int fn_82A2A958();
extern int fn_82A35B80();
extern int fn_82E20100();
extern int fn_82F65AC0();


void fn_82E209B0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar6;
  longlong lVar5;
  undefined1 auStack_180 [44];
  undefined1 auStack_154 [340];
  
  uVar3 = fn_82E20100(0xffffffff8214bbe0,1);
  uVar4 = fn_82A2A438(uVar3,auStack_180);
  if ((int)uVar4 != -1) {
    do {
      iVar6 = fn_82F65AC0(0xffffffff8214bbcc,auStack_154);
      if (iVar6 != 0) {
        bVar2 = false;
        for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          iVar6 = fn_82F65AC0(puVar1[1],auStack_154);
          if (iVar6 == 0) {
            bVar2 = true;
            break;
          }
        }
        if ((!bVar2) && (lVar5 = fn_82E20100(auStack_154,1), lVar5 != 0)) {
          fn_82A2A958(lVar5);
          fn_8265CAA0(lVar5);
        }
      }
      iVar6 = fn_82A35B80(uVar4,auStack_180);
    } while (iVar6 != 0);
    fn_82A1E658(uVar4);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8265CAA0(uVar3);
  }
  return;
}

