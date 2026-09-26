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
extern int fn_8268B610();
extern int fn_826944C8();
extern int fn_82696D38();


void fn_827AC070(int param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *apuStack_20 [2];
  
  pcVar5 = "fontFamily";
  pcVar4 = *(char **)*param_2;
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    pcVar4 = "font-family";
  }
  else {
    pcVar5 = "fontSize";
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      pcVar4 = "font-size";
    }
    else {
      pcVar5 = "fontStyle";
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        pcVar4 = "font-style";
      }
      else {
        pcVar5 = "fontWeight";
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          pcVar4 = "font-weight";
        }
        else {
          pcVar5 = "letterSpacing";
          pcVar6 = pcVar4;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            pcVar4 = "letter-spacing";
          }
          else {
            pcVar5 = "marginLeft";
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar6;
              cVar2 = *pcVar5;
              if (cVar1 == '\0') break;
              pcVar6 = pcVar6 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              pcVar4 = "margin-left";
            }
            else {
              pcVar5 = "marginRight";
              pcVar6 = pcVar4;
              do {
                cVar1 = *pcVar6;
                cVar2 = *pcVar5;
                if (cVar1 == '\0') break;
                pcVar6 = pcVar6 + 1;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                pcVar4 = "margin-right";
              }
              else {
                pcVar5 = "textAlign";
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  cVar2 = *pcVar5;
                  if (cVar1 == '\0') break;
                  pcVar6 = pcVar6 + 1;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  pcVar4 = "text-align";
                }
                else {
                  pcVar5 = "textDecoration";
                  pcVar6 = pcVar4;
                  do {
                    cVar1 = *pcVar6;
                    cVar2 = *pcVar5;
                    if (cVar1 == '\0') break;
                    pcVar6 = pcVar6 + 1;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 == cVar2) {
                    pcVar4 = "text-decoration";
                  }
                  else {
                    pcVar5 = "textIndent";
                    pcVar6 = pcVar4;
                    do {
                      cVar1 = *pcVar6;
                      cVar2 = *pcVar5;
                      if (cVar1 == '\0') break;
                      pcVar6 = pcVar6 + 1;
                      pcVar5 = pcVar5 + 1;
                    } while (cVar1 == cVar2);
                    if (cVar1 == cVar2) {
                      pcVar4 = "text-indent";
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  fn_8268B610(*(undefined4 *)(param_1 + 8),pcVar4,0xffffffffffffffff);
  fn_8268B610(*(undefined4 *)(param_1 + 8),0xffffffff8201232c,0xffffffffffffffff);
  fn_82696D38(apuStack_20,param_3,*(undefined4 *)(param_1 + 4),0xffffffffffffffff,0);
  fn_8268B610(*(undefined4 *)(param_1 + 8),*apuStack_20[0],0xffffffffffffffff);
  uVar3 = apuStack_20[0][2];
  apuStack_20[0][2] = (int)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    fn_826944C8(apuStack_20[0]);
  }
  fn_8268B610(*(undefined4 *)(param_1 + 8),0xffffffff82015e28,0xffffffffffffffff);
  return;
}

