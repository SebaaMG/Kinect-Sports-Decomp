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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D8E9D0();
extern int fn_82DAFAD0();
extern int fn_82DB0088();


void fn_82D8F4C8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *(int *)(param_2 + 8) = param_1;
  if (*(char *)(param_2 + 0xe8) == '\x05') {
    fn_82DAFAD0(*(undefined4 *)(param_1 + 0x20));
  }
  else {
    if (*(char *)(param_1 + 200) == '\0') {
      iVar3 = **(int **)(param_1 + 0x28);
    }
    else {
      piVar5 = (int *)(param_1 + 0x28);
      bVar1 = param_3 == 1;
      if (bVar1) {
        uVar2 = fn_82D8E9D0(param_1,piVar5,4,0);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82DAFAD0(uVar2,param_2);
          return;
        }
      }
      else {
        piVar5 = (int *)(param_1 + 0x34);
      }
      iVar3 = fn_82CE5410();
      iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x6c);
      *(undefined2 *)(iVar3 + 4) = 0x6c;
      iVar3 = fn_82DB0088(iVar3,param_1);
      *(byte *)(iVar3 + 0x26) = (bVar1 << 2 | bVar1) << 4 | *(byte *)(iVar3 + 0x26) & 0xf;
      iVar4 = piVar5[1];
      *(short *)(iVar3 + 0x20) = (short)iVar4;
      *(char *)(iVar3 + 0x24) = (char)iVar4;
      iVar4 = fn_82CE5410();
      if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar5,4);
      }
      *(int *)(piVar5[1] * 4 + *piVar5) = iVar3;
      piVar5[1] = piVar5[1] + 1;
    }
    fn_82DAFAD0(iVar3,param_2);
    *(char *)(iVar3 + 0x24) = (char)*(undefined4 *)(param_2 + 0xd4);
  }
  return;
}

