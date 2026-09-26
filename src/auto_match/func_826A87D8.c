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
extern int fn_82696480();
extern int fn_82696BC8();
extern int fn_826A65E8();
extern int fn_826F5C10();


undefined1 * fn_826A87D8(undefined1 *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar3;
  undefined8 uVar2;
  undefined1 uVar5;
  int iVar4;
  char *apcStack_30 [12];
  
  iVar4 = *(int *)(param_2 + 0x78);
  if (*(byte *)(param_2 + 0x7c) < 7) {
    cVar3 = fn_826A65E8(iVar4 + 0x100,*param_3);
    if (cVar3 != '\0') goto LAB_826a8814;
    cVar3 = fn_826A65E8((ulonglong)*(uint *)(param_2 + 0x78) + 0xfc,*param_3);
    if (cVar3 != '\0') {
      iVar4 = *(int *)(param_2 + 0x78);
      goto LAB_826a8850;
    }
LAB_826a8894:
    apcStack_30[0] = (char *)0x0;
    uVar2 = fn_826F5C10(**(undefined4 **)*param_3,apcStack_30,
                              -(6 < *(byte *)(param_2 + 0x7c)) & 1);
    if (((int)uVar2 == -1) || (*apcStack_30[0] != '\0')) {
      *param_1 = 0;
      return param_1;
    }
    lVar1 = (**(code **)(**(int **)(param_2 + 0x74) + 0x50))(*(int **)(param_2 + 0x74),uVar2);
    if (lVar1 == 0) {
      uVar5 = 2;
      goto LAB_826a883c;
    }
LAB_826a8830:
    fn_82696480(param_3[1],lVar1);
  }
  else {
    if (*(int *)(iVar4 + 0x100) == *(int *)*param_3) {
LAB_826a8814:
      lVar1 = (**(code **)(**(int **)(param_2 + 0x74) + 0x54))(*(int **)(param_2 + 0x74),0);
      goto LAB_826a8830;
    }
    if (*(int *)(iVar4 + 0xfc) != *(int *)*param_3) goto LAB_826a8894;
LAB_826a8850:
    fn_82696BC8(param_3[1],*(undefined4 *)(iVar4 + 0x2a0));
  }
  uVar5 = 1;
LAB_826a883c:
  *param_1 = uVar5;
  return param_1;
}

