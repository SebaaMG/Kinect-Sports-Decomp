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
extern int fn_82240E68();
extern int fn_82240EC0();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_82897F68();
extern int fn_828996C8();
extern int fn_8289AC08();
extern int fn_8289D8D0();
extern int fn_828A1318();
extern int fn_82BA02A8();


void fn_82897FE8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar2 == 0)) {
      if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
         (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), iVar2 == 0))
      goto LAB_828981f0;
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
      }
      fn_8289D8D0(*(undefined4 *)(param_1 + 0x28));
      iVar3 = fn_8240D928();
      if (param_2 == *(int **)((iVar3 + 4) * 4 + iVar2)) goto LAB_828981f0;
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82240E68(iVar2 + 8,iVar3,param_2);
    }
    else {
      if (param_2 == *(int **)(param_1 + 0xc)) goto LAB_828981f0;
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82240EC0(param_1 + 4,param_2);
    }
    fn_8289AC08(param_1,1,1,1,0);
    cVar4 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar4 != '\0') goto LAB_828981f0;
  }
  else {
    if (param_2 == *(int **)(param_1 + 0xc)) goto LAB_828981f0;
    fn_8289AC08(param_1,1,0,1,0);
    fn_82BA02A8(param_1);
    fn_82897F68(param_1 + 0xc,0);
    fn_82897F68(param_1 + 0xc,param_2);
    fn_8289AC08(param_1,1,1,1,0);
    cVar4 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar4 != '\0') {
      fn_828996C8(param_1,0xffffffffffffffff);
      goto LAB_828981f0;
    }
  }
  fn_828A1318(*(undefined4 *)(param_1 + 0x28),param_1);
LAB_828981f0:
  uVar1 = param_2[1];
  param_2[1] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    (**(code **)(*param_2 + 0x14))(param_2,1);
  }
  return;
}

