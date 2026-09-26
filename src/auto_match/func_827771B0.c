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
extern int fn_826A8E58();
extern int fn_8276D860();
extern int fn_827741E8();
extern int fn_82774A58();
extern int fn_82774B68();
extern int fn_827750F8();
extern int fn_82776DD8();
extern int fn_8278C110();
extern int fn_827B02B0();
extern int fn_827B0A40();
extern unsigned int iStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_827771B0(int param_1)

{
  char cVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  int iStack_34;
  
  RtlEnterCriticalSection(param_1 + 0x9e4);
  fn_82776DD8(param_1);
  *(int *)(param_1 + 0x38) = param_1 + 0x38;
  *(int *)(param_1 + 0x3c) = param_1 + 0x38;
  fn_82774A58(param_1 + 0x24);
  fn_8278C110(&piStack_38,param_1 + 0x8e0);
  uStack_40 = 0;
  uStack_3c = 0;
  cVar1 = fn_826A8E58(&piStack_38,&uStack_40);
  if (cVar1 == '\0') {
    uStack_40 = 0;
    uStack_3c = 0;
    do {
      fn_8276D860(*(undefined4 *)(iStack_34 * 0xc + *piStack_38 + 0x10),param_1 + 8);
      fn_827741E8(&piStack_38);
      cVar1 = fn_826A8E58(&piStack_38,&uStack_40);
    } while (cVar1 == '\0');
  }
  fn_827B0A40(param_1 + 0x8e0);
  fn_827750F8(param_1 + 0x8f8,param_1 + 0x8e4);
  fn_82774B68(param_1 + 0x8e4);
  fn_827B02B0(param_1 + 0x900);
  RtlLeaveCriticalSection(param_1 + 0x9e4);
  return;
}

