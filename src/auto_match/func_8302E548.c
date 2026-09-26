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
extern int fn_82FB04A0();
extern int fn_83007AE8();
extern int fn_8302D408();
extern int fn_8302E148();
extern int fn_8302E4C0();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


void fn_8302E548(int param_1,int param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined2 *puVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined2 *puStack0000001c;
  undefined4 uStack00000024;
  
  puStack0000001c = (undefined2 *)(param_2 + 4);
  uStack00000024 = param_3;
  iVar11 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  if (iVar11 == 1) {
    *(undefined2 *)(param_1 + 0x120) = *puStack0000001c;
    pfVar1 = (float *)(puStack0000001c + 3);
    pfVar2 = (float *)(puStack0000001c + 5);
    sVar10 = puStack0000001c[7];
    bVar4 = *(byte *)(puStack0000001c + 8);
    bVar5 = *(byte *)((int)puStack0000001c + 0x11);
    puVar3 = puStack0000001c + 9;
    cVar6 = *(char *)(puStack0000001c + 10);
    cVar7 = *(char *)((int)puStack0000001c + 0x15);
    cVar8 = *(char *)(puStack0000001c + 0xb);
    dVar15 = (double)*(float *)(puStack0000001c + 1);
    cVar9 = *(char *)((int)puStack0000001c + 0x17);
    puStack0000001c = puStack0000001c + 0xc;
    dVar14 = (double)*pfVar1;
    dVar13 = (double)*pfVar2;
    iVar11 = fn_8302E148(param_1,*(undefined1 *)puVar3);
    if (iVar11 == 1) {
      *(float *)(param_1 + 0x114) = (float)dVar14;
      *(float *)(param_1 + 0x118) = (float)dVar13;
      *(float *)(param_1 + 0x110) = (float)dVar15;
      if (*(short *)(param_1 + 0x11c) != sVar10) {
        *(short *)(param_1 + 0x11c) = sVar10;
        fn_8302D408(param_1);
      }
      if (*(byte *)(param_1 + 0x11e) >> 4 != bVar4) {
        *(byte *)(param_1 + 0x11e) = bVar4 << 4 | *(byte *)(param_1 + 0x11e) & 0xf;
        fn_8302D408(param_1);
      }
      if ((*(byte *)(param_1 + 0x11e) >> 2 & 3) != bVar5) {
        *(byte *)(param_1 + 0x11e) = (bVar5 & 3) << 2 | *(byte *)(param_1 + 0x11e) & 0xf3;
        fn_8302D408(param_1);
      }
      bVar4 = 1 - (cVar6 == '\0');
      if ((*(byte *)(param_1 + 0x11f) >> 3 & 1) != bVar4) {
        *(byte *)(param_1 + 0x11f) = (bVar4 & 1) << 3 | *(byte *)(param_1 + 0x11f) & 0xf7;
        fn_8302D408(param_1);
      }
      bVar4 = *(byte *)(param_1 + 0x11f);
      bVar5 = (cVar7 != '\0') << 2;
      *(byte *)(param_1 + 0x11f) = bVar5 | bVar4 & 0xfb;
      if (((ulonglong)bVar4 & 2) >> 1 != (ulonglong)(cVar8 != '\0')) {
        *(byte *)(param_1 + 0x11f) = (cVar8 != '\0') << 1 | bVar5 | bVar4 & 0xf9;
        fn_8302D408(param_1);
      }
      bVar12 = cVar9 != '\0';
      if ((bool)(*(byte *)(param_1 + 0x11f) & 1) != bVar12) {
        *(byte *)(param_1 + 0x11f) = bVar12 | *(byte *)(param_1 + 0x11f) & 0xfe;
        fn_8302D408(param_1);
      }
      iVar11 = fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024);
      if (iVar11 == 1) {
        fn_8302E4C0(param_1,&stack0x0000001c,&stack0x00000024);
      }
    }
  }
  return;
}

