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
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_8265CA20();
extern int fn_8288CCB8();
extern int fn_8288F180();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern unsigned int lbl_82023640;
extern unsigned int lbl_82023648;


void fn_82890658(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int aiStack_50 [4];
  undefined1 auStack_40 [40];
  
  *param_1 = &lbl_82023648;
  param_1[0x14] = &lbl_82023640;
  if (*(char *)(param_1 + 0x27) != '\0') {
    iVar2 = fn_828A12E8(param_1[0x1b]);
    fn_8288CCB8(aiStack_50,iVar2 + 4,param_1 + 0x20);
    if ((aiStack_50[0] != *(int *)(iVar2 + 8)) &&
       (iVar2 = *(int *)(aiStack_50[0] + 0x14), iVar2 != 0)) {
      fn_82230110(auStack_40,0xffffffff82023750);
      fn_8288F180(iVar2,param_1[0x22],auStack_40);
      fn_82230180(auStack_40);
    }
  }
  piVar3 = (int *)param_1[0x23];
  if (piVar3 != (int *)param_1[0x24]) {
    do {
      puVar1 = (undefined4 *)*piVar3;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[0x24]);
  }
  if (param_1[0x23] != 0) {
    fn_8265CA20();
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

