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
extern int fn_8247A888();
extern int fn_82528BF8();


undefined8
fn_8247B858(int param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((param_3 != (char *)0x0) && (*param_3 != '\0')) && (iVar2 = fn_8247A888(), iVar2 != 2)) {
    fn_82528BF8(*(undefined4 *)(iVar1 + 0x770),param_3,param_4,param_5,0,0);
  }
  return 0;
}

