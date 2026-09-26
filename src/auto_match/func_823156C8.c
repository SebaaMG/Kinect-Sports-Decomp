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
extern int fn_822BD338();
extern int fn_822C8C08();
extern int fn_8236C6A0();


void fn_823156C8(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  
  if ((*(int *)(param_1 + 0x660) == 2) && (*(char *)(param_1 + 0x5d5) != '\0')) {
    bVar2 = false;
    if (*(char *)(param_1 + 0x5d4) == '\0') goto LAB_82315708;
  }
  bVar2 = true;
LAB_82315708:
  if ((bVar2) && (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0xe0) = 1;
  }
  cVar3 = fn_822BD338((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20) +
                            4,0xffffffff821aeee4);
  if (cVar3 != '\0') {
    fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  }
  fn_8236C6A0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
  return;
}

