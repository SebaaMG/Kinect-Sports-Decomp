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
extern int fn_82FB7C50();
extern int fn_82FB7CC8();
extern int fn_82FB8030();
extern int fn_82FB81B8();
extern int fn_82FB8420();
extern int fn_82FB8808();


void fn_82FB8E58(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  char cVar6;
  int iVar5;
  char acStack_30 [48];
  
  sVar1 = *(short *)(param_1 + 0x2a);
  if (sVar1 < 2) {
    if (sVar1 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
          acStack_30[0] = '\x01';
          piVar3 = (int *)fn_82FB7CC8(param_1,*(undefined4 *)(*(int *)(param_1 + 8) + -0xc));
          do {
            if (piVar3 == (int *)0x0) {
              return;
            }
            uVar4 = 0;
            iVar5 = *(int *)(param_1 + 8) + -0xc;
            uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
            if (uVar2 < 4) {
              if ((uVar2 == 0) || (uVar2 == 1)) {
                uVar4 = fn_82FB8420(param_1,iVar5,acStack_30);
              }
              else {
                uVar4 = fn_82FB8808(param_1,iVar5,acStack_30);
              }
            }
            cVar6 = acStack_30[0];
            if (acStack_30[0] == '\0') {
              piVar3 = *(int **)((uVar4 & 0xffff) * 4 + piVar3[4]);
              cVar6 = (**(code **)(*piVar3 + 4))(piVar3);
              if (cVar6 != '\0') break;
              if (((piVar3[5] - piVar3[4] & 0xfffffffcU) == 0) ||
                 (*(char *)((int)piVar3 + 0x26) == '\0')) {
                piVar3 = (int *)piVar3[1];
              }
              else {
                iVar5 = fn_82FB81B8(param_1,piVar3);
                if (iVar5 != 1) {
                  fn_82FB8030(param_1);
                  return;
                }
              }
              cVar6 = '\x01';
              acStack_30[0] = '\x01';
            }
            else {
              iVar5 = piVar3[1];
              fn_82FB7C50(param_1);
              piVar3 = (int *)fn_82FB7CC8(param_1,iVar5);
            }
          } while (cVar6 != '\0');
          if (piVar3 != (int *)0x0) {
            iVar5 = piVar3[4];
            *(int *)(param_1 + 0x10) = iVar5;
            *(char *)(param_1 + 0x18) = '\x01' - (iVar5 == 0);
            *(int *)(param_1 + 0x14) = piVar3[2];
            *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(piVar3 + 3);
          }
        }
      }
    }
  }
  else {
    *(short *)(param_1 + 0x2a) = sVar1 + -1;
  }
  return;
}

