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
extern int fn_827CF0B8();
extern int fn_827CF108();
extern int fn_827CF198();
extern int fn_827CF2F8();
extern int fn_827CF388();
extern int fn_827CF458();
extern int fn_827CF548();
extern int fn_827CF7F8();


void fn_827CF990(int *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  bVar3 = true;
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x34);
  param_1[0x55] = (int)puVar4;
  *puVar4 = fn_827CF0B8;
  puVar4[1] = fn_827CF108;
  *(undefined1 *)(puVar4 + 2) = 0;
  if (*(char *)((int)param_1 + 0xb3) != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
  }
  iVar6 = 0;
  if (0 < param_1[0xf]) {
    puVar7 = (uint *)(param_1[0x11] + 0xc);
    puVar8 = puVar4 + 3;
    do {
      uVar1 = puVar7[-1];
      uVar2 = param_1[0x36];
      if ((uVar1 == uVar2) && (*puVar7 == param_1[0x37])) {
        if (param_1[0x2d] == 0) {
          pcVar5 = fn_827CF2F8;
LAB_827cfb40:
          *puVar8 = pcVar5;
        }
        else {
          pcVar5 = fn_827CF7F8;
LAB_827cfa64:
          *puVar8 = pcVar5;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
      else {
        if (uVar1 << 1 == uVar2) {
          if (*puVar7 != param_1[0x37]) {
            if ((uVar1 << 1 == uVar2) && (*puVar7 << 1 == param_1[0x37])) {
              if (param_1[0x2d] == 0) {
                pcVar5 = fn_827CF458;
                goto LAB_827cfb40;
              }
              pcVar5 = fn_827CF548;
              goto LAB_827cfa64;
            }
            goto LAB_827cfae4;
          }
          pcVar5 = fn_827CF388;
LAB_827cfb3c:
          bVar3 = false;
          goto LAB_827cfb40;
        }
LAB_827cfae4:
        trapWord(6,(ulonglong)uVar1,0);
        trapWord(5,(ulonglong)uVar1 &
                   ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff
                );
        if ((ulonglong)uVar2 == (longlong)((int)uVar2 / (int)uVar1) * (longlong)(int)uVar1) {
          uVar1 = param_1[0x37];
          uVar2 = *puVar7;
          trapWord(6,(ulonglong)uVar2,0);
          trapWord(5,(ulonglong)uVar2 &
                     ~((((ulonglong)uVar1 & 0x7fffffff) << 1 | (ulonglong)(uVar1 >> 0x1f)) - 1),
                   0xffff);
          if ((ulonglong)uVar1 == (longlong)((int)uVar1 / (int)uVar2) * (longlong)(int)uVar2) {
            pcVar5 = fn_827CF198;
            goto LAB_827cfb3c;
          }
        }
        *(undefined4 *)(*param_1 + 0x14) = 0x26;
        (**(code **)*param_1)(param_1);
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 0x15;
    } while (iVar6 < param_1[0xf]);
  }
  if ((param_1[0x2d] != 0) && (!bVar3)) {
    *(undefined4 *)(*param_1 + 0x14) = 99;
    (**(code **)(*param_1 + 4))(param_1,0);
  }
  return;
}

