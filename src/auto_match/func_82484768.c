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
extern unsigned int lbl_83265988;


int fn_82484768(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  
  iVar1 = lbl_83265988;
  iVar6 = 0;
  if (lbl_83265988 != 0) {
    pcVar2 = (char *)(param_1 + 0x234);
    cVar4 = 'b';
    cVar5 = *pcVar2;
    if (cVar5 == 'b') {
      cVar5 = 'b';
      pcVar3 = pcVar2;
      do {
        pcVar3 = pcVar3 + 1;
        if (cVar5 == '\0') goto LAB_824847e0;
        cVar4 = pcVar3[(int)"boxing_main" - (int)pcVar2];
        cVar5 = *pcVar3;
      } while (cVar5 == cVar4);
    }
    if (cVar5 == cVar4) {
LAB_824847e0:
      iVar6 = *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x110);
    }
    else {
      cVar5 = *pcVar2;
      cVar4 = 'f';
      if (cVar5 == 'f') {
        cVar5 = 'f';
        pcVar3 = pcVar2;
        do {
          pcVar3 = pcVar3 + 1;
          if (cVar5 == '\0') goto LAB_82484838;
          cVar4 = pcVar3[(int)"football_main" - (int)pcVar2];
          cVar5 = *pcVar3;
        } while (cVar5 == cVar4);
      }
      if (cVar5 == cVar4) {
LAB_82484838:
        iVar6 = *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x114);
      }
      else {
        cVar5 = *pcVar2;
        cVar4 = 'v';
        if (cVar5 == 'v') {
          cVar5 = 'v';
          pcVar3 = pcVar2;
          do {
            pcVar3 = pcVar3 + 1;
            if (cVar5 == '\0') goto LAB_82484890;
            cVar4 = pcVar3[(int)"volleyball_main" - (int)pcVar2];
            cVar5 = *pcVar3;
          } while (cVar5 == cVar4);
        }
        if (cVar5 == cVar4) {
LAB_82484890:
          iVar6 = *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x11c);
        }
        else {
          cVar5 = *pcVar2;
          cVar4 = 't';
          if (cVar5 == 't') {
            cVar5 = 't';
            pcVar3 = pcVar2;
            do {
              pcVar3 = pcVar3 + 1;
              if (cVar5 == '\0') goto LAB_824848e8;
              cVar4 = pcVar3[(int)"tabletennis_main" - (int)pcVar2];
              cVar5 = *pcVar3;
            } while (cVar5 == cVar4);
          }
          if (cVar5 == cVar4) {
LAB_824848e8:
            iVar6 = *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x118);
          }
          else {
            cVar5 = *pcVar2;
            cVar4 = 'b';
            if (cVar5 == 'b') {
              cVar5 = 'b';
              pcVar3 = pcVar2;
              do {
                pcVar3 = pcVar3 + 1;
                if (cVar5 == '\0') goto LAB_82484940;
                cVar4 = pcVar3[(int)"bowling_main" - (int)pcVar2];
                cVar5 = *pcVar3;
              } while (cVar5 == cVar4);
            }
            if (cVar5 == cVar4) {
LAB_82484940:
              iVar6 = *(int *)(*(int *)(lbl_83265988 + 0x100) + 0x10c);
            }
            else {
              pcVar2 = strstr(pcVar2,"athletics_main");
              if (pcVar2 == (char *)0x0) {
                return 0;
              }
              iVar6 = *(int *)(*(int *)(iVar1 + 0x100) + 0x108);
            }
          }
        }
      }
    }
    if ((iVar6 < 0) || (3 < iVar6)) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

