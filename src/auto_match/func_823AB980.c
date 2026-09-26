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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8239FF60();
extern int fn_8256D470();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_821CC160;


undefined8 fn_823AB980(int *param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_50 [8];
  int iStack_48;
  int iStack_44;
  
  iVar1 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar1 == 0) {
    return 1;
  }
  for (puVar4 = (undefined4 *)param_1[0x1b];
      (puVar4 != (undefined4 *)param_1[0x1c] &&
      ((ulonglong)*(uint *)*puVar4 != (param_3 & 0xffffffff))); puVar4 = puVar4 + 2) {
  }
  piVar2 = param_1 + 0x1f;
  for (puVar3 = (undefined4 *)param_1[0x1f];
      (puVar3 != (undefined4 *)param_1[0x20] &&
      ((ulonglong)*(uint *)*puVar3 != (param_3 & 0xffffffff))); puVar3 = puVar3 + 2) {
  }
  if (puVar4 == (undefined4 *)param_1[0x1c]) {
    if (puVar3 == (undefined4 *)param_1[0x20]) {
      return 0;
    }
    fn_82365BD8(&iStack_48,puVar3);
    if (*(char *)(iStack_48 + 8) != '\0') {
      if (iStack_44 == 0) {
        return 0;
      }
      fn_822315A0();
      return 0;
    }
  }
  else {
    fn_82365BD8(&iStack_48,puVar4);
    if (*(char *)(iStack_48 + 8) == '\0') goto LAB_823aba7c;
    param_1[0x27] = 0;
    fn_8239FF60(*(undefined4 *)(param_2 + 0x2dc),0x1b);
    piVar2 = param_1 + 0x1b;
    puVar3 = puVar4;
  }
  fn_8256D470(auStack_50,piVar2,puVar3);
  if ((float)param_1[0x23] <= lbl_821CC160) {
    param_1[1] = 2;
  }
LAB_823aba7c:
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return 1;
}

