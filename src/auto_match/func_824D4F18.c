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
extern int fn_824CE358();
extern int fn_8288B760();
extern int fn_828AB870();


void fn_824D4F18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  longlong lVar3;
  
  fn_824CE358();
  iVar1 = param_1[0x20];
  cVar4 = fn_8288B760(param_1);
  if (cVar4 != '\0') {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    lVar3 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar3 + 0x924,uVar2);
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    lVar3 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB870(lVar3 + 0x978,uVar2);
  }
  return;
}

