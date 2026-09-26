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
extern int fn_82881E68();
extern int fn_8289F160();
extern int fn_82CE0678();
extern int fn_82CE06D8();
extern int fn_82CE06E8();
extern int fn_82CE06F8();
extern unsigned int iStack_3c;
extern unsigned int lbl_83212A04;
extern unsigned int uStack_40;


void fn_828823E0(int param_1,undefined8 param_2)

{
  int iVar2;
  longlong lVar1;
  int *piVar3;
  undefined4 uStack_40;
  int iStack_3c;
  int aiStack_38 [14];
  
  iStack_3c = param_1;
  fn_8289F160(aiStack_38,0xffffffff83212a00,&iStack_3c);
  if ((aiStack_38[0] == lbl_83212A04) ||
     (piVar3 = (int *)(*(int *)(aiStack_38[0] + 0x10) + 0x28), *(int *)(aiStack_38[0] + 0x10) == 0))
  {
    piVar3 = (int *)0x0;
  }
  if ((*piVar3 != 0) && (iVar2 = fn_82CE06F8(*piVar3), iVar2 != 3)) {
    fn_82CE06D8(*piVar3);
  }
  aiStack_38[0] = param_1;
  fn_8289F160(&iStack_3c,0xffffffff83212a00,aiStack_38);
  if ((iStack_3c == lbl_83212A04) ||
     (lVar1 = (ulonglong)*(uint *)(iStack_3c + 0x10) + 0x34,
     (ulonglong)*(uint *)(iStack_3c + 0x10) == 0)) {
    lVar1 = 0;
  }
  iVar2 = fn_82CE0678(lVar1,param_2,&uStack_40);
  if (iVar2 == 0) {
    fn_82881E68(param_1,&uStack_40);
    fn_82CE06E8(uStack_40);
  }
  return;
}

