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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F83A50();
extern int fn_82F84074();


int fn_82F83F78(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                 undefined4 *param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puStack00000034;
  undefined1 auStack_20 [8];
  
  puStack00000034 = param_5;
  if (((param_5 != (undefined4 *)0x0) && (*param_5 = 0xffffffff, param_1 != 0)) &&
     ((param_6 == 0 || ((param_4 & 0xfffffe7f) == 0)))) {
    iVar2 = fn_82F83A50(auStack_20,param_5,param_1,param_2,param_3,param_4);
    fn_82F84074();
    if (iVar2 == 0) {
      return 0;
    }
    *puStack00000034 = 0xffffffff;
    return iVar2;
  }
  puVar1 = (undefined4 *)fn_82F68240();
  *puVar1 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

