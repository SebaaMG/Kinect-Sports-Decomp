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
extern int fn_827D9E18();
extern int fn_827D9E40();
extern int fn_827DCBF8();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E0658();
extern int fn_827E8720();
extern unsigned int uStack_40;


void fn_827DC520(int param_1,int *param_2)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_40;
  int *apiStack_3c [15];
  
  RtlEnterCriticalSection(param_1 + 0xbfc);
  fn_827D9E18(param_2);
  iVar3 = fn_827D9E40(param_2);
  if (iVar3 == 0) {
    uStack_40 = (**(code **)(*param_2 + 0x10))(param_2);
    iVar3 = param_1 + 0xb5c;
    fn_827E0658(apiStack_3c,iVar3,&uStack_40);
    for (piVar1 = apiStack_3c[0]; piVar1 != *(int **)(param_1 + 0xb60); piVar1 = (int *)*piVar1) {
      apiStack_3c[0] = (int *)piVar1[3];
      if (apiStack_3c[0] == param_2) {
        uVar2 = fn_827E0250(iVar3,piVar1 + 2);
        fn_827E0438(iVar3,piVar1,uVar2);
        fn_827E8720(&uStack_40,param_1 + 0xb60,piVar1);
        fn_827DCBF8(param_1 + 0xbd4,apiStack_3c);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xbfc);
  return;
}

