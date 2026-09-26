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
extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_828B30E8();
extern int fn_828B39D8();
extern int fn_828B3DF8();
extern int fn_828B3F68();


void fn_828B4B00(int param_1,char param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_30 [12];
  
  iVar2 = param_1 + 0x54;
  fn_828B3DF8(aiStack_30,iVar2);
  if (param_2 == '\0') {
    if (aiStack_30[0] != *(int *)(param_1 + 0x58)) {
      fn_828B30E8(aiStack_30,iVar2);
      fn_828B2BF8();
      fn_828B25C8();
    }
  }
  else if (aiStack_30[0] == *(int *)(param_1 + 0x58)) {
    iVar1 = fn_828B39D8(iVar2);
    if ((undefined8 *)(iVar1 + 0x10) != (undefined8 *)0x0) {
      *(undefined8 *)(iVar1 + 0x10) = *param_3;
    }
    fn_828B3F68(aiStack_30,iVar2,iVar1,0);
    fn_828B2BF8();
    fn_828B25C8();
  }
  return;
}

