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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82933578();
extern int fn_82983380();


int fn_82985350(undefined8 param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  if (param_2 != 0) {
    uVar3 = fn_82930318(0x50);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82933088(uVar3,0,0,0,0,1,param_2 + 0x10);
    }
    if (iVar4 != 0) {
      uVar3 = fn_82930318(0x28);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = fn_82931D88(uVar3,3,0x17,0,1,1,0x200);
      }
      *(int *)(iVar4 + 0x10) = iVar5;
      if (iVar5 != 0) {
        uVar3 = fn_82930318(0x40);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          pcVar2 = *(char **)(param_2 + 0x18);
          pcVar6 = pcVar2;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar5 = fn_82933578(uVar3,5,pcVar2,(int)pcVar6 - (int)pcVar2,param_2 + 0x10);
        }
        *(int *)(iVar4 + 0x20) = iVar5;
        if (iVar5 != 0) {
          uVar3 = fn_82930318(0x14);
          if ((uVar3 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_829304E0(uVar3,*(undefined4 *)(iVar4 + 0x20),0,0xffffffff8204e390);
          }
          if (iVar5 != 0) {
            *(int *)(iVar4 + 0x20) = iVar5;
            fn_82983380(param_1,iVar4);
            return iVar4;
          }
        }
      }
    }
  }
  return 0;
}

