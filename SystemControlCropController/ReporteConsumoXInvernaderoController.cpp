#include "ReporteConsumoXInvernaderoController.h"
#include "InvernaderoController.h"
using namespace SystemControlCropController;

ReporteConsumoAguaxInvernaderoController::ReporteConsumoAguaxInvernaderoController() {

}

List<GrafConsumoAguaXInvernadero^>^ ReporteConsumoAguaxInvernaderoController::generarReporte() {
	List<GrafConsumoAguaXInvernadero^>^ listaGrafica = gcnew List<GrafConsumoAguaXInvernadero^>();
	InvernaderoController^ invernaderoController = gcnew InvernaderoController();
	List<invernadero^>^ listaInvernaderos = invernaderoController->buscarAll();
}