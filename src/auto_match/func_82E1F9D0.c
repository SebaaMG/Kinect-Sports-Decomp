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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern int fn_82A1E658();
extern int fn_82A29DE8();
extern int fn_82A2A108();
extern int fn_82F65AC0();
extern unsigned int uStack_40;


undefined8 fn_82E1F9D0(undefined4 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 auStack_3c [36];
  
  if (((param_2 & 0xffffffff) != 0) &&
     (uVar1 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x80,0), (int)uVar1 != -1)) {
    iVar2 = fn_82A2A108(uVar1,&uStack_40,0x20,auStack_50,0);
    if (iVar2 != 0) {
      iVar2 = fn_82F65AC0(auStack_3c,param_1[6]);
      if (iVar2 == 0) {
        *param_1 = uStack_40;
      }
      fn_82A1E658(uVar1);
      return 0;
    }
    fn_82A1E658(uVar1);
  }
  return 0xffffffff80004005;
}

