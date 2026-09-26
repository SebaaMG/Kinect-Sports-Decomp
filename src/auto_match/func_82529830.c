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
extern int fn_82522838();
extern int fn_82522A48();
extern int fn_82587B68();
extern int fn_82A1EFC0();
extern unsigned int lbl_832767CC;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_82529830(void)

{
  undefined4 uVar1;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = fn_82587B68();
  puVar4 = (undefined4 *)(**(code **)(iVar3 + 8))();
  uStack_1c = 0;
  uStack_20 = 0;
  (*(code *)*puVar4)(&uStack_20);
  uVar1 = uStack_20;
  if (lbl_832767CC == 0) {
    fn_82522838();
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
  }
  lVar2 = fn_82522A48(lbl_832767CC,uVar1);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(lVar2,0,uVar1);
  }
  return 0;
}

