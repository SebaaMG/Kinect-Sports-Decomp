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
extern int fn_82F14878();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


undefined8 fn_82F14BE8(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int aiStack_3c [15];
  
  uVar1 = *param_2;
  puVar2 = *(uint **)(*(int *)(param_1 + 0x48) + 0x58);
  if ((uVar1 & 4) == 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x48) + 0x24);
    iVar5 = (0x80 >> (uVar3 & 0x3f)) + 0x1e;
    iVar6 = (int)uVar1 >> 0x10;
    if (iVar6 < iVar5) {
      if (-iVar5 <= iVar6) {
        iVar4 = (int)(uVar1 << 0x10) >> 0x14;
        if ((iVar4 < iVar5) && (-iVar5 <= iVar4)) {
          fn_82F14878(iVar6,aiStack_3c,&iStack_4c,&iStack_48,uVar3);
          fn_82F14878(iVar4,&iStack_44,&uStack_40,&uStack_50,uVar3);
          aiStack_3c[0] = iStack_44 * 6 + aiStack_3c[0];
          *puVar2 = (uStack_50 + iStack_48) * 0x40000 & 0xfc0000 |
                    ((iStack_4c << (uStack_50 & 0x3f) | uStack_40) & 0x1ffff) << 1 |
                    *puVar2 & 0xff000001;
          goto LAB_82f14cec;
        }
      }
    }
    aiStack_3c[0] = 0x24;
  }
  else {
    aiStack_3c[0] = 0x25;
  }
  *puVar2 = *puVar2 & 0xfffc0001;
LAB_82f14cec:
  if ((*param_2 & 8) != 0) {
    aiStack_3c[0] = aiStack_3c[0] + 0x26;
  }
  *(char *)puVar2 = (char)aiStack_3c[0] + -1;
  iVar6 = aiStack_3c[0] * 4 + *(int *)(param_1 + 0x30);
  *(int *)(iVar6 + -4) = *(int *)(iVar6 + -4) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return 0;
}

