.. -*- rst -*-
.. needs:example_verification
.. needs:body_verification

=========================================
 Port interfaces (servers, os-interface)
=========================================

Creates a port interface and uses it to attach a port to a server and
detaches a port interface from a server. Also, lists all port interfaces
and shows details for a port interface.

List Port Interfaces
====================

.. rest_method:: GET /v2.1/{tenant_id}/servers/{server_id}/os-interface

Lists port interfaces that are attached to a server.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404),
NotImplemented(501)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - server_id: server_id_path

Response
--------

.. rest_parameters:: parameters.yaml

  - interfaceAttachments: interfaceAttachments
  - port_state: port_state
  - fixed_ips: fixed_ips_resp
  - ip_address: ip_address
  - subnet_id: subnet_id
  - mac_addr: mac_addr
  - net_id: net_id_resp
  - port_id: port_id_resp

**Example List Port Interfaces: JSON response**

.. literalinclude:: ../../doc/api_samples/os-attach-interfaces/attach-interfaces-list-resp.json
   :language: javascript

Create Interface
================

.. rest_method:: POST /v2.1/{tenant_id}/servers/{server_id}/os-interface

Creates a port interface and uses it to attach a port to a server instance.

Normal response codes: 200

Error response codes: badRequest(400), unauthorized(401), forbidden(403),
itemNotFound(404), conflict(409), computeFault(500), NotImplemented(501)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - server_id: server_id_path
  - interfaceAttachment: interfaceAttachment
  - port_id: port_id
  - net_id: net_id
  - fixed_ips: fixed_ips
  - ip_address: ip_address_req

**Example Create Interface: JSON request**

.. literalinclude:: ../../doc/api_samples/os-attach-interfaces/attach-interfaces-create-req.json
   :language: javascript

Response
--------

.. rest_parameters:: parameters.yaml

  - interfaceAttachment: interfaceAttachment_resp
  - fixed_ips: fixed_ips_resp
  - ip_address: ip_address
  - subnet_id: subnet_id
  - mac_addr: mac_addr
  - net_id: net_id_resp
  - port_id: port_id_resp
  - port_state: port_state

**Example Create Interface: JSON response**

.. literalinclude:: ../../doc/api_samples/os-attach-interfaces/attach-interfaces-create-resp.json
   :language: javascript

Show Port Interface Details
===========================

.. rest_method:: GET /v2.1/{tenant_id}/servers/{server_id}/os-interface/{port_id}

Shows details for a port interface that is attached to a server.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - server_id: server_id_path
  - port_id: port_id_path

Response
--------

.. rest_parameters:: parameters.yaml

  - interfaceAttachment: interfaceAttachment_resp
  - port_state: port_state
  - fixed_ips: fixed_ips_resp
  - ip_address: ip_address
  - subnet_id: subnet_id
  - mac_addr: mac_addr
  - net_id: net_id_resp
  - port_id: port_id_resp

**Example Show Port Interface Details: JSON response**

.. literalinclude:: ../../doc/api_samples/os-attach-interfaces/attach-interfaces-show-resp.json
   :language: javascript

Detach Interface
================

.. rest_method:: DELETE /v2.1/{tenant_id}/servers/{server_id}/os-interface/{port_id}

Detaches a port interface.

Normal response codes: 202

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404),
conflict(409), NotImplemented(501) 

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - server_id: server_id_path
  - port_id: port_id_path

Response
--------

No body is returned on successful request.
