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
extern unsigned int lbl_8218EE24;
extern unsigned int lbl_8218EFB4;


undefined2 fn_8255C068(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  puVar2 = (uint *)*param_1;
  if (puVar2 != (uint *)0x0) {
    uVar6 = *puVar2;
    uVar5 = 0;
    piVar7 = (int *)(-(uint)(uVar6 != 0) & (uint)(puVar2 + 2));
    if (uVar6 != 0) {
      do {
        if (*(short *)(piVar7 + 1) == 0x2a) {
          bVar1 = *(byte *)(piVar7 + 4);
          if ((piVar7[3] == 0) || ((uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1)) != 0))
          goto code_r0x8255c100;
        }
        uVar5 = uVar5 + 1;
        piVar7 = (int *)(*piVar7 + (int)piVar7);
      } while (uVar5 < uVar6);
    }
  }
  bVar3 = false;
  if (**(char **)(param_1[2] + 0xd48) == '\0') {
    psVar4 = &lbl_8218EFB4;
  }
  else {
    psVar4 = &lbl_8218EE24;
  }
  uVar6 = 0;
  do {
    if ((-(uint)(**(char **)(param_1[2] + 0xd48) != '\0') & 0xfffffff6) + 0x10 <= uVar6) {
code_r0x8255c14c:
      puVar2 = (uint *)param_1[1];
      if ((puVar2 != (uint *)0x0) && (bVar3)) {
        uVar6 = *puVar2;
        uVar5 = 0;
        piVar7 = (int *)(-(uint)(uVar6 != 0) & (uint)(puVar2 + 2));
        if (uVar6 != 0) {
          do {
            if (*(short *)(piVar7 + 1) == 0x2a) {
              bVar1 = *(byte *)(piVar7 + 4);
              if ((piVar7[3] == 0) || ((uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1)) != 0)) {
code_r0x8255c100:
                return *(undefined2 *)((int)piVar7 + 6);
              }
            }
            uVar5 = uVar5 + 1;
            piVar7 = (int *)(*piVar7 + (int)piVar7);
          } while (uVar5 < uVar6);
        }
      }
      return 0;
    }
    if (*psVar4 == 0x2a) {
      bVar3 = true;
      goto code_r0x8255c14c;
    }
    uVar6 = uVar6 + 1;
    psVar4 = psVar4 + 1;
  } while( true );
}

