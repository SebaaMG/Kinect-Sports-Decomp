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
extern int fn_824BF8A8();
extern int fn_825200A8();
extern int fn_82549960();
extern int fn_8254CC70();
extern int fn_8254F740();
extern int fn_8265C9E0();
extern int fn_82829120();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_8254CDE0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  int *piVar4;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar3 = fn_825200A8(param_2,0xffffffff82196288);
  if (iVar3 == 0) {
    fn_82829120(&iStack_30,param_1 + 0x38,param_2);
    if (iStack_30 == *(int *)(param_1 + 0x3c)) {
      uVar2 = fn_8265C9E0(0x200);
      if ((uVar2 & 0xffffffff) == 0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = fn_82549960(uVar2,param_2,0,0,0,0);
      }
      if (iStack_30 != 0) {
        uStack_2c = fn_8254CC70(param_1,param_3);
        fn_824BF8A8(param_1 + 0x18,&iStack_30);
        iVar3 = *(int *)(param_1 + 0x1c);
        iVar1 = *(int *)(param_1 + 0x18);
        piVar4 = (int *)fn_8254F740(param_1 + 0x38,param_2);
        *piVar4 = (iVar3 - iVar1 >> 3) + -1;
      }
    }
  }
  return;
}

