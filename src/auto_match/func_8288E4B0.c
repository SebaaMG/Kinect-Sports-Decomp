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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_8288B4F8();
extern int fn_8288CDC8();
extern int fn_8288D1D8();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined4 * fn_8288E4B0(undefined4 *param_1,int param_2,ulonglong param_3,uint *param_4)

{
  uint uStack00000024;
  undefined1 auStack_30 [48];
  
  uStack00000024 = (uint)param_3;
  if (((param_3 & 0xffffffff) == (ulonglong)**(uint **)(param_2 + 4)) &&
     (param_4 == *(uint **)(param_2 + 4))) {
    fn_8288D1D8(param_2);
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    if ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      do {
        fn_8288B4F8(&stack0x00000024);
        fn_8288CDC8(auStack_30,param_2,param_3);
        param_3 = (ulonglong)uStack00000024;
      } while (param_3 != ZEXT48(param_4));
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

