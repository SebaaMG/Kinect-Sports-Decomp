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
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC5C0();
extern int fn_82CFC6A8();
extern unsigned int *iStack_7c;
extern unsigned int uStack_78;


undefined1 * fn_82CFCE90(undefined1 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined1 auStack_74 [116];
  
  puStack_80 = auStack_74;
  uStack_78 = 0x8000000c;
  iStack_7c = 0;
  pcVar2 = (char *)fn_82CFC6A8(auStack_90,*param_2,*param_3,&puStack_80);
  if (*pcVar2 == '\0') {
    *param_1 = 0;
  }
  else {
    iVar5 = (*(int *)(param_4 + 4) - param_3[1]) * iStack_7c + param_2[1];
    if (param_2[1] < iVar5) {
      iVar3 = fn_82CE5410();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),iVar5);
    }
    else {
      iVar3 = *param_2;
    }
    fn_82CFC5C0(iVar3,*param_2,(ulonglong)(uint)param_2[1] - 1,param_3,param_4,&puStack_80);
    *(undefined1 *)(iVar3 + iVar5 + -1) = 0;
    if (iVar3 == *param_2) {
      iVar3 = fn_82CE5410();
      if ((int)(param_2[2] & 0x3fffffffU) < iVar5) {
        iVar4 = (param_2[2] & 0x3fffffffU) << 1;
        if (iVar4 <= iVar5) {
          iVar4 = iVar5;
        }
        fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_2,iVar4,1);
      }
      param_2[1] = iVar5;
      *param_1 = 1;
    }
    else {
      iVar4 = fn_82CE5410();
      piVar1 = *(int **)(iVar4 + 0x10);
      param_2[1] = 0;
      if ((param_2[2] & 0x80000000U) == 0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,*param_2,param_2[2] & 0x3fffffff,1);
      }
      *param_2 = iVar3;
      param_2[2] = iVar5;
      param_2[1] = iVar5;
      *param_1 = 1;
    }
  }
  iVar5 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),puStack_80,uStack_78 & 0x3fffffff,4);
  }
  return param_1;
}

