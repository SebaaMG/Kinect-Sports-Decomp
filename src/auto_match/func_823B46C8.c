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
extern unsigned int *auStack_31;
extern int fn_828E9D40();
extern unsigned int *lbl_8328A688;


undefined8 fn_823B46C8(int param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_31 [17];
  int *piStack_20;
  
  fn_828E9D40(*(undefined4 *)(param_1 + 0x80));
  if (lbl_8328A688 != (undefined4 *)0x0) {
    puVar1 = auStack_31 + 1;
    if (lbl_8328A688 != (undefined4 *)0x8328a678) {
      puVar1 = (undefined1 *)0x0;
    }
    piStack_20 = (int *)(**(code **)*lbl_8328A688)(lbl_8328A688,puVar1);
    if (piStack_20 != (int *)0x0) {
      (**(code **)(*piStack_20 + 4))
                (piStack_20,*(undefined4 *)(param_1 + 0x6c),param_1 + 0x88,param_1 + 0x80);
      if (piStack_20 != (int *)0x0) {
        (**(code **)(*piStack_20 + 0xc))
                  (piStack_20,
                   (int)(auStack_31 + -(int)piStack_20 + 1) -
                   (int)(auStack_31 +
                        (uint)(auStack_31 + -(int)piStack_20 + 1 == (undefined1 *)0x0) +
                        -(int)piStack_20));
      }
    }
  }
  return 1;
}

