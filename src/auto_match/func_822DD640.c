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


bool fn_822DD640(int *param_1,int *param_2)

{
  bool bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  
  if (*param_1 == 0) {
LAB_822dd65c:
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') goto LAB_822dd65c;
  }
  if (*param_2 == 0) {
LAB_822dd680:
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    if (*(char *)(param_2 + 0xc) != '\0') goto LAB_822dd680;
  }
  if (iVar6 == 0) {
    if (iVar4 == 0) {
      pbVar7 = (byte *)param_1[8];
      pbVar3 = (byte *)param_2[8];
      if (param_1[9] - (int)pbVar7 == param_2[9] - (int)pbVar3) {
        iVar6 = param_1[9] - (int)pbVar7;
        lVar2 = 0;
        if (iVar6 != 0) {
          pbVar5 = pbVar7 + iVar6;
          do {
            lVar2 = (ulonglong)*pbVar7 - (ulonglong)*pbVar3;
            if (lVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar3 = pbVar3 + 1;
          } while (pbVar7 != pbVar5);
        }
        bVar1 = (int)lVar2 == 0;
      }
      else {
        bVar1 = false;
      }
      if (((bVar1) && (param_1[10] == param_2[10])) && (param_1[0xb] == param_2[0xb])) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      goto LAB_822dd740;
    }
  }
  bVar1 = iVar4 == iVar6;
LAB_822dd740:
  return !bVar1;
}

