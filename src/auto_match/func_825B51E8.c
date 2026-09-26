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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_8251FA58();
extern int fn_82526A20();
extern int fn_82526C70();
extern int fn_8256A790();
extern int fn_8265BF48();
extern int fn_82837D88();
extern int fn_828387B8();
extern int fn_82851760();
extern int fn_82851858();
extern int iRam8328220c;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_825B51E8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined1 auStack_50 [80];
  
  iVar3 = param_3 * 4;
  if (*(int *)(*(int *)(*param_1 + 0x98) + iVar3) != 0) {
    uStack_60 = 0;
    fn_82526C70(auStack_50,0x20,0xffffffff821c8460,param_3);
    iVar1 = fn_82851760(*param_1,auStack_50,0,&uStack_5c);
    if (iVar1 != 0) {
      fn_82851858(uStack_5c,&uStack_60);
    }
    uVar2 = (ulonglong)uStack_60;
    if (uVar2 == 0) {
      if (*(int *)(param_3 * 0x20 + param_2 + 0x10) == 0) {
        fn_828387B8(*(undefined4 *)(*(int *)(*param_1 + 0x98) + iVar3),auStack_58);
        fn_82837D88(*(undefined4 *)(*(int *)(*param_1 + 0x98) + iVar3));
      }
      else {
        fn_8251FA58();
      }
    }
    else {
      iVar1 = fn_82526A20(uVar2,0xffffffff821c8450);
      if (iVar1 == 0) {
        iRam8328220c = iRam8328220c + -1;
      }
      else {
        auStack_58[0] = fn_8265BF48(uVar2,0);
        fn_8256A790(auStack_58,*(int *)(*param_1 + 0x98) + iVar3);
      }
    }
    *(undefined4 *)(*(int *)(*param_1 + 0x98) + iVar3) = 0;
  }
  return;
}

